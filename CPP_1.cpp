#include <iostream>
#include <vector>
#include <string>
#include <cassert>

vector<string> separate_paren_groups(string paren_string);

int main() {
    vector<string> separate_paren_groups(string paren_string) {
        vector<string> result;
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
                if (balance == 0) {
                    result.push_back(current_group);
                    current_group.clear();
                } else {
                    current_group += c;
                }
            }
        }

        return result;
    }

    bool issame(vector<string> v1, vector<string> v2) {
        if (v1.size() != v2.size()) {
            return false;
        }
        for (size_t i = 0; i < v1.size(); ++i) {
            if (v1[i] != v2[i]) {
                return false;
            }
        }
        return true;
    }

    assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));

    return 0;
}