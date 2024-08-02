#include <iostream>
#include <vector>
#include <string>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> indices;
    int n = text.length();
    int m = target.length();
    
    for (int i = 0; i <= n - m; ++i) {
        bool found = true;
        for (int j = 0; j < m; ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            for (int k = i; k < i + m; ++k) {
                indices.push_back(k);
            }
        }
    }
    
    return indices;
}

int main() {
    int a, b;
    string text, target;
    cin >> a >> b >> text >> target;

    cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << endl;

    vector<int> result = indicesOfSubstring(text, target);
    cout << "Indices of substring '" << target << "' in text '" << text << "' are: ";
    for (int idx : result) {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}