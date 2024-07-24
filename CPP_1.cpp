#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b);

vector<string> separate_paren_groups(string paren_string) {
    vector<string> groups;
    string current_group;
    int balance = 0;
    
    for (char c : paren_string) {
        if (c == '(') {
            if (balance > 0) {
                current_group += c;
            }
            balance++;
        } else if (c == ')') {
            balance--;
            if (balance > 0) {
                current_group += c;
            } else if (balance == 0) {
                groups.push_back(current_group);
                current_group = "";
            }
        }
    }
    
    return groups;
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    // Your main function code here
    return 0;
}