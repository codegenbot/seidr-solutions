#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int targetLength = target.length();
    for (int i = 0; i <= text.length() - targetLength; i++) {
        if (text.substr(i, targetLength) == target) {
            indices.push_back(i);
            // Check for overlapping occurrences
            while ((i + targetLength) <= text.length()) {
                if (text.substr(i, targetLength) != target) break;
                i++;
                indices.push_back(i);
            }
        }
    }
    return indices;
}

int gcd(int a, int b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}