#include <vector>
#include <iostream>
#include <string>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int i = 0;
    while (i <= text.length() - target.length()) {
        int j = 0;
        while (j < target.length()) {
            if (text[i + j] != target[j]) break;
            j++;
        }
        if (j == target.length()) result.push_back(i);
        i++;
    }
    return result;
}

int main() {
    string text, target;
    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the target substring: ";
    getline(cin, target);
    vector<int> indices = indicesOfSubstring(text, target);
    for (int i : indices) cout << i << " ";
    return 0;
}