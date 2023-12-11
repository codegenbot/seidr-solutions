#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> indices;
    int textLength = text.length();
    int targetLength = target.length();

    for (int i = 0; i <= textLength - targetLength; i++) {
        int j = 0;
        while (j < targetLength && text[i+j] == target[j]) {
            j++;
        }
        if (j == targetLength) {
            indices.push_back(i);
        }
    }
    return indices;
}

int main() {
    string text, target;
    getline(cin, text);
    getline(cin, target);
    vector<int> result = indicesOfSubstring(text, target);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}