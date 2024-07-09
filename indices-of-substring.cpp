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
            i += m - 1; // Start searching from the end of the found target
        } else {
            i -= m - 1; // Backtrack to correctly re-start search
        }
    }

    return result;
}

int main() {
    string text;
    getline(cin, text);
    cin.ignore();
    string target;
    getline(cin, target);

    vector<int> indices = indicesOfSubstring(text, target);

    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}