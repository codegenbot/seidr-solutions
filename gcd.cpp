#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
    if (a == 0 || b == 0) return 0;
    if (b > a) return gcd(b, a);
    return a % b ? gcd(a - b, b) : b;
}

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> indices;
    for (int i = 0; i < text.size(); i++) {
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
    vector<int> indices = indicesOfSubstring(text, target);
    for (auto i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}