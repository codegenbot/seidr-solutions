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
    int a, b;
    cout << "Enter two integers separated by a space: ";
    cin >> a >> b;
    cout << gcd(a, b) << endl;

    string text, target;
    cout << "Enter text and target string separated by a space: ";
    cin.ignore();
    getline(cin, text);
    getline(cin, target);
    vector<int> result = indicesOfSubstring(text, target);
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}