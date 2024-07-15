#include <vector>
#include <string>
#include <iostream>
#include <cassert>

vector<string> separate_paren_groups(string paren_string);

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    vector<string> separate_paren_groups(string paren_string) {
        vector<string> result;
        string group = "";
        bool in_group = false;

        for (char c : paren_string) {
            if (c == '(') {
                in_group = true;
                group = "";
            } else if (c == ')') {
                in_group = false;
                result.push_back(group);
            } else if (in_group) {
                group += c;
            }
        }

        return result;
    }

    assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));
}