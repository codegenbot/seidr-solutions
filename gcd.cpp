#include <iostream>
#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> indices;

    size_t n = text.size();
    size_t m = target.size();

    for (size_t i = 0; i < n - m + 1; ++i) {
        bool found = true;
        for (size_t j = 0; j < m; ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            indices.push_back(static_cast<int>(i));
        }
    }

    return indices;
}