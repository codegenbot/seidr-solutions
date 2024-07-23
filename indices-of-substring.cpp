#include <vector>
#include <iostream>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m; i++) {
        bool match = true;
        for (int j = 0; j < m; j++) {
            if (text[i + j] != target[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            result.push_back(i);
            // Start searching from the index where it was previously found
            for (int k = i + m; k <= n - m; k++) {
                match = true;
                for (int j = 0; j < m; j++) {
                    if (text[k + j] != target[j]) {
                        match = false;
                        break;
                    }
                }
                if (match) {
                    result.push_back(k);
                }
            }
        }
    }

    return result;
}

int main() {
    string text;
    getline(cin, text);
    string target;
    getline(cin, target);

    vector<int> indices = indicesOfSubstring(text, target);

    for (int i : indices) {
        cout << i << endl;
    }
}