```
#include <vector>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> result;
    for (size_t i = 0; i < text.length(); ++i) {
        if (text[i] == target[0]) {
            bool found = true;
            for (size_t j = 1; j < target.length(); ++j) {
                if (text[i + j] != target[j]) {
                    found = false;
                    break;
                }
            }
            if (found) {
                result.push_back(i);
            }
        }
    }
    return result;
}

int main() {
    string text, target;
    cin >> text >> target;
    vector<int> indices = indicesOfSubstring(text, target);
    for (size_t i = 0; i < indices.size(); ++i) {
        cout << indices[i] << " ";
    }
    return 0;
}