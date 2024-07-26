#include <iostream>
#include <vector>
#include <string>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(abs(b), abs(a % b));
}

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> indices;
    int n = text.size(), m = target.size();
    for (int i = 0; i <= n - m; ++i) {
        bool found = true;
        int k = i; // Modified line
        for (int j = 0; j < m; ++j) {
            if (text[k] != target[j]) { // Modified line
                found = false;
                break;
            }
            ++k; // Modified line
        }
        if (found) {
            for (int j = 0; j < m; ++j) {
                indices.push_back(i + j);
            }
        }
    }
    return indices;
}

int main() {
    // Your code here
    return 0;
}