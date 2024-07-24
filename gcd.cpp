#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int len = target.length();
    for (int i = 0; i <= text.length() - len; i++) {
        bool match = true;
        for (int j = 0; j < len; j++) {
            if (text[i + j] != target[j]) {
                match = false;
                break;
            }
        }
        if (match) indices.push_back(i);
    }
    return indices;
}

long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}