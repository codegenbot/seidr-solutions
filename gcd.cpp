#include <vector>
#include <iostream>
#include <string>
#include <cmath>

int gcd(int a, int b) {
    if (b == 0) return abs(a);
    return gcd(b, a % b);
}

vector<int> getIndicesOfSubstring(const string& text, const string& target) {
    vector<int> indices;
    for (int i = 0; i < text.size() - target.size() + 1; ++i) {
        if (text.substr(i, target.size()) == target) {
            indices.push_back(i);
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
    vector<int> indices = getIndicesOfSubstring(text, target);
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}