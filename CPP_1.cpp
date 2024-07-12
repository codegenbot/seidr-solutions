#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    int start = 0;
    for (int i = 0; i < paren_string.size(); ++i) {
        if (paren_string[i] == '(') {
            if (start == 0)
                start = i + 1;
            else if (paren_string[i] == ')') {
                result.push_back(paren_string.substr(start - 1, i - start + 2));
                start = 0;
            }
        } else if (start > 0) {
            if (paren_string[i] == ')') {
                result.push_back(paren_string.substr(start - 1, i - start + 2));
                start = 0;
            }
        }
    }
    if (start > 0)
        result.push_back(paren_string.substr(start - 1));
    return result;
}

int main() {
    string paren_string;
    cout << "Enter a string of parentheses: ";
    cin >> paren_string;
    
    vector<string> groups = separate_paren_groups(paren_string);
    for (const auto& group : groups) {
        if (issame({group}, {"()"})) {
            cout << "Grouped parenthesis: " << group << endl;
        } else {
            cout << "Error: Non-matching grouped parentheses: " << group << endl;
        }
    }
    
    return 0;
}