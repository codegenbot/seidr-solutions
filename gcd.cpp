#include <iostream>
#include <vector>
#include <string>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> indices;
    int textLen = text.length();
    int targetLen = target.length();
    
    for (int i = 0; i <= textLen - targetLen; ++i) {
        bool found = true;
        for (int j = 0; j < targetLen; ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            for (int j = 0; j < targetLen; ++j) {
                indices.push_back(i + j);
            }
        }
    }
    
    return indices;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;

    string text, target;
    cin >> text >> target;
    vector<int> result = indicesOfSubstring(text, target);
    for (int index : result) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}