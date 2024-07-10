#include <iostream>
#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

vector<int> findSubstringIndices(string text, string target) {
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
    int a = 12;
    int b = 18;
    cout << gcd(a, b) << endl;

    string text = "abcdeabcdeabcde";
    string target = "bc";
    vector<int> result = findSubstringIndices(text, target);
    for (int index : result) {
        cout << index << " ";
    }
    cout << endl;
    return 0;
}