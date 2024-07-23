#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int i = 0; while (i <= text.size() - target.size()) {
        bool found = true;
        for (int j = 0; j < target.size(); j++) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            result.push_back(i);
            i += 1; // Start searching from the next character
        } else {
            i++; // Increment if target not found at current position
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