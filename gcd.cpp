#include <vector>
#include <string>
#include <iostream>

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
    string text, target;

    cin >> a >> b >> text >> target;

    int result_gcd = gcd(a, b);
    vector<int> result_indices = indicesOfSubstring(text, target);

    cout << "GCD: " << result_gcd << endl;
    cout << "Indices where target appears in the text: ";
    for (int idx : result_indices) {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}