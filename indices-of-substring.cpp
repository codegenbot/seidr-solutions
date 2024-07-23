#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int i = text.size() - 1;
    while (i >= target.size() - 1) {
        bool found = true;
        for (int j = 0; j < target.size(); j++) {
            if (text[i - j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            result.push_back(i - target.size() + 1);
            i -= 1; // Don't miss next match
        } else {
            i--; // Move to the next character
        }
    }
    return result;
}

int main() {
    string text, target;
    cin >> text >> target;

    vector<int> indices = indicesOfSubstring(text, target);
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}