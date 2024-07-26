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
    cout << "GCD: " << gcd(175443, 398651) << endl;

    vector<int> result = indicesOfSubstring("175443", "398651");
    cout << "Indices of Substring: ";
    for (int idx : result) {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}