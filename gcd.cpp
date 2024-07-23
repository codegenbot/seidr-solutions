#include <iostream>
#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

vector<int> indicesOfSubstring(const string& text, const string& target);

int main() {
    int resultGcd = gcd(647870, 797108);
    cout << "GCD: " << resultGcd << endl;

    string text = "647870797108";
    string target = "797";
    vector<int> resultIndices = indicesOfSubstring(text, target);
    cout << "Indices of Substring:";
    for (int idx : resultIndices) {
        cout << " " << idx;
    }
    cout << endl;
    
    return 0;
}

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> indices;
    size_t n = text.size();
    size_t m = target.size();

    for (size_t i = 0; i <= n - m; ++i) {
        bool found = true;
        for (size_t j = 0; j < m; ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            indices.push_back(static_cast<int>(i));
        }
    }

    if (m > 1 && target[0] == target[m - 1]) {
        for (size_t i = 1; i < m - 1; ++i) {
            if (target[i] == target[0]) {
                indices.push_back(static_cast<int>(i));
            }
        }
    }

    return indices;
}