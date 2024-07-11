#include <iostream>
#include <string>
#include <vector>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> indices;
    for (size_t i = 0; i <= text.size() - target.size(); ++i) {
        if (text.substr(i, target.size()) == target) {
            for (size_t j = i; j < i + target.size(); ++j) {
                indices.push_back(j);
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
    vector<int> result;
    cin >> text >> target;
    result = indicesOfSubstring(text, target);
    for (int idx : result) {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}