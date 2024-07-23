#include <iostream>
#include <string>
#include <vector>
#include <sstream>
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

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> indices;
    size_t n = text.size();
    size_t m = target.size();

    for (size_t i = 0; i < n; ++i) {
        bool found = true;
        for (size_t j = 0; j < m; ++j) {
            if (i + j >= n || text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            indices.push_back(static_cast<int>(i));
        }
    }

    return indices;
}

int main() {
    string input;
    getline(cin, input);
    stringstream ss(input);

    int a, b;
    ss >> a >> b;
    cout << gcd(a, b) << endl;

    string text, target;
    ss >> text >> target;
    vector<int> result = indicesOfSubstring(text, target);
    for (int idx : result) {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}