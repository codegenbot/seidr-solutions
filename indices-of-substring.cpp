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
            i += m; // Start searching from the next character
        } else if (i == n - m) { 
            found = true;
            for (int j = 0; j < m; j++) {
                if (text[i + j] != target[j]) {
                    found = false;
                    break;
                }
            }
            if (found) {
                result.push_back(i);
            } else {
                i++; // Start searching from the next character
            }
        } else {
            i++; // Start searching from the next character
        }
    }

    return result;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();
    
    vector<string> targets(n);
    for (int i = 0; i < n; i++) {
        getline(cin, targets[i]);
    }
    
    string text;
    getline(cin, text);

    for (string target : targets) {
        if (target.empty()) break;
        vector<int> indices = indicesOfSubstring(text, target);
        
        for (int i : indices) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}