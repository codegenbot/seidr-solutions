#include <string>
#include <vector>
#include <iostream>

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
    cin >> text >> target;
    vector<int> res = indicesOfSubstring(text, target);
    for (auto i : res) {
        cout << i << " ";
    }
    cout << endl;
    return 0;