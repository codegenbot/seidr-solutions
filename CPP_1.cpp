```
#include <iostream>
#include <string>
#include <vector>

bool issame(vector<string>, vector<string>);
vector<string> separate_paren_groups(string);

bool issame(vector<string> groups1, vector<string> groups2) {
    if (groups1.size() != groups2.size()) return false;
    for (int i = 0; i < groups1.size(); i++) {
        if (groups1[i] != groups2[i]) return false;
    }
    return true;
}

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group = "";
    int open_count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            open_count++;
            current_group += c;
        } else if (c == ')') {
            open_count--;
            current_group += c;
            if (open_count == 0) {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}

int main() {
    assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));
    return 0;
}