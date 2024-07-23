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
    int n = text.size();
    int m = target.size();
    
    for (int i = 0; i <= n - m; ++i) {
        bool found = true;
        for (int j = 0; j < m; ++j) {
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

int main() {
    // Test case for gcd
    int resultGcd = gcd(647870, 797108);
    cout << "GCD: " << resultGcd << endl;

    // Test case for indicesOfSubstring
    string text = "647870797108";
    string target = "797108";
    vector<int> resultIndices = indicesOfSubstring(text, target);
    cout << "Indices of Substring:";
    for (int idx : resultIndices) {
        cout << " " << idx;
    }
    cout << endl;

    return 0;
}