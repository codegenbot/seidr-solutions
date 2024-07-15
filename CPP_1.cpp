#include <vector>
#include <string>

bool issame(string& s) {
    if (s.size() < 2) return false;
    return s[0] == s[s.size() - 1];
}

vector<string> split_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;
    int open_braces = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (open_braces > 0 && issame(current_group)) {
                current_group.push_back(c);
            }
            open_braces++;
        } else if (c == ')') {
            open_braces--;
            if (open_braces > 0 && issame(current_group)) {
                current_group.push_back(c);
            } else {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}