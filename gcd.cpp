#include <iostream>
#include <vector>
#include <string>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> indices;
    size_t n = text.size();
    size_t m = target.size();
    
    for (size_t i = 0; i <= n - m; ++i) {
        bool found = true;
        for (size_t j = 0; j < m; ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            indices.push_back(static_cast<int>(i)); // Cast size_t to int for consistency
        }
    }
    
    return indices;
}

int main() {
    // Test case for gcd
    int resultGcd = gcd(647870, 797108 % 647870);
    cout << "GCD: " << resultGcd << endl;

    // Test case for indicesOfSubstring
    string text = "647870";
    string target = "797108";
    vector<int> resultIndices = indicesOfSubstring(text, target);
    cout << "Indices of Substring:";
    for (int idx : resultIndices) {
        cout << " " << idx;
    }
    cout << endl;

    return 0;
}