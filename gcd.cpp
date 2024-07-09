#include <vector>
#include <string>
#include <iostream>
#include <cmath>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(abs(b), abs(a % b));
}

vector<int> findIndicesOfSubstring(const string& text, const string& target) {
    vector<int> indices;
    int textLen = text.length();
    int targetLen = target.length();
    
    for (int i = 0; i < textLen - targetLen + 1; ++i) {
        bool found = true;
        for (int j = 0; j < targetLen; ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            indices.push_back(i);
        }
    }
    
    return indices;
}