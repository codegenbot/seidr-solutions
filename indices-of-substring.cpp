#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int targetLen = target.length();
    int textLen = text.length();

    for (int i = 0; i <= textLen - targetLen; i++) {
        int j;
        for (j = 0; j < targetLen; j++) {
            if (text[i + j] != target[j]) {
                break;
            }
        }
        if (j == targetLen) {
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    string text, target;
    getline(cin, text);
    getline(cin, target);

    vector<int> indices = indicesOfSubstring(text, target);

    for (int i = 0; i < indices.size(); i++) {
        cout << indices[i] << " ";
    }

    return 0;
}