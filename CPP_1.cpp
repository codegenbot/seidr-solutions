#include <iostream>
#include <vector>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> groupParentheses(const string& paren_string) {
    vector<string> result;
    string current_group;
    int open_braces = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (open_braces > 0) {
                current_group += c;
            }
            open_braces++;
        } else if (c == ')') {
            open_braces--;
            if (open_braces > 0) {
                current_group += c;
            } else if (open_braces == 0) {
                result.push_back(current_group);
                current_group.clear();
            }
        }
    }

    return result;
}

int main() {
    string input;
    cout << "Enter a string with parentheses: ";
    cin >> input;
    
    vector<string> groups = groupParentheses(input);
    
    cout << "Groups of parentheses: ";
    for (const string& group : groups) {
        cout << group << ' ';
    }
    
    return 0;
}