#include <vector>
#include <string>
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
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
            for (int j = 0; j < m; ++j) {
                indices.push_back(i + j);
            }
        }
    }
    
    return indices;
}

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << endl;

    string text, target;
    cout << "Enter the text string: ";
    cin.ignore();
    getline(cin, text);
    cout << "Enter the target string: ";
    getline(cin, target);
    
    vector<int> result = indicesOfSubstring(text, target);
    cout << "Indices of target string in text: ";
    for (int idx : result) {
        cout << idx << " ";
    }
    cout << endl;
    
    return 0;
}