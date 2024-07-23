#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

vector<int> indicesOfSubstring(const string& text, const string& target);

int main() {
    int resultGcd = gcd(647870, 797108);
    cout << "GCD: " << resultGcd << endl;

    string text = "647870";
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