#include <vector>
#include <iostream>
#include <string>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    for (int i = 0; i <= text.length() - target.length(); i++) {
        bool found = true;
        for (int j = 0; j < target.length(); j++) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    string text, target;
    cout << "Enter the text: ";
    cin >> text;
    cout << "Enter the target substring: ";
    cin >> target;
    vector<int> res = indicesOfSubstring(text, target);
    for (int i : res) {
        cout << i << endl;
    }
    return 0;