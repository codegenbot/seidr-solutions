```cpp
#include <iostream>
#include <string>
#include <vector>

bool issame(vector<string>, vector<string>);
vector<string> separate_paren_groups(string);

int rename_me() {
    assert(issame(separate_paren_groups("( ) (( )) (( )( ")) , {"()", "(())", "(()())"}));
    return 0;
}

bool issame(vector<string> a, vector<string> b) {
    for (string s : a) {
        bool found = false;
        for (string t : b) {
            if (s == t) {
                found = true;
                break;
            }
        }
        if (!found) {
            return false;
        }
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