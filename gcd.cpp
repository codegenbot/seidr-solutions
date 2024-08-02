#include <vector>
#include <string>
#include <iostream>
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
    string text = "abracadabra";
    string target = "abra";
    
    vector<int> result = indicesOfSubstring(text, target);
    for (int idx : result) {
        cout << idx << " ";
    }
    cout << endl;

    int a = 12;
    int b = 18;
    cout << gcd(a, b) << endl;
    
    return 0;
}