#include <iostream>
#include <string>
#include <vector>

using namespace std;

int gcd(int b, int a) {
    while (a != 0) {
        int temp = a;
        a = b % a;
        b = temp;
    }
    return b;
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
            indices.push_back(static_cast<int>(i + 1));
        }
    }

    return indices;
}