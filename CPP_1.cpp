#include <vector>
#include <string>

bool issame(char a, char b) {
    return (a == '(' && b == ')');
}

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;
    int open_braces = 0;

    for (char c : paren_string) {
        if (issame(c, '(')) {
            if (open_braces > 0) {
                current_group.push_back(c);
            }
            open_braces++;
        } else if (issame(c, ')')) {
            open_braces--;
            if (open_braces > 0) {
                current_group.push_back(c);
            } else {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}