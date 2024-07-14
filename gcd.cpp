#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int targetLength = target.length();
    for (int i = 0; i <= text.length() - targetLength; i++) {
        if (text.substr(i, targetLength) == target) {
            indices.push_back(i);
            i += targetLength - 1; // Skip the overlapping strings
        }
    }
    return indices;
}

long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}