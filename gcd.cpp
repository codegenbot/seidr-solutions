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
    int tlen = target.length();
    for (int i = 0; i <= text.length() - tlen; ++i) {
        if (text.substr(i, tlen) == target) {
            for (int j = 0; j < tlen; ++j) {
                indices.push_back(i + j);
            }
        }
    }
    return indices;
}

int main() {
    int a, b;
    string text, target;
    
    // Read input for gcd
    cin >> a >> b;
    cout << gcd(a, b) << endl;

    // Read input for indicesOfSubstring
    cin.ignore(); // Ignore the newline character
    getline(cin, text);
    cin >> target;
    vector<int> result = indicesOfSubstring(text, target);

    // Output the result
    for (int idx : result) {
        cout << idx << " ";
    }
    cout << endl;
    
    return 0;
}