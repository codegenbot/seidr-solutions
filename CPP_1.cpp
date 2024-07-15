#include <vector>

vector<string> separate_paren_groups(string paren_string);

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

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), { "()", "(())", "(()())" }));