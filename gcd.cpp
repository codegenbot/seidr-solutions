#include <iostream>
#include <vector>
#include <string>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> indices;
    int n = text.size(), m = target.size();
    for (int i = 0; i <= n - m; ++i) {
        if (text.substr(i, m) == target) {
            for (int j = 0; j < m; ++j) {
                indices.push_back(i + j);
            }
        }
    }
    return indices;
}

int main() {
    string text = "ababcabcabcab";
    string target = "abc";
    vector<int> result = indicesOfSubstring(text, target);
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}