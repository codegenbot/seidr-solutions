#include <iostream>
#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m; i++) {
        bool found = true;
        for (int j = 0; j < m; j++) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            result.push_back(i);
            i++; // Start searching from the next character
        } else {
            i++; // Start searching from the next character
        }
    }

    return result;
}

int main() {
    string text;
    getline(cin, text);
    while (getline(cin, text) && !text.empty()) cin.ignore();
    string target;
    while (true) {
        getline(cin, target);
        if (target.empty()) break;
        vector<int> indices = indicesOfSubstring(text, target);

        for (int i : indices) {
            cout << i << " ";
        }
        cout << endl;
    }

    cin.ignore();  // Flush the input stream after processing each target string

    return 0;
}