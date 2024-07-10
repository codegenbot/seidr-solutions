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
            i = i + 1; // Start searching from the next character
        } else {
            i = i + 1; // Start searching from the next character
        }
    }

    return result;
}

int main() {
    while(true) {
        string text;
        getline(cin, text);
        string target;

        cout << "Enter a target (empty line to quit):" << endl;
        getline(cin, target);

        if(target.empty()) break;

        vector<int> indices = indicesOfSubstring(text, target);

        for(int i : indices) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}