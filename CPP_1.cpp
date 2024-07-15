bool issame(char a, char b) {
    return (a == '(' && b == ')') || (a == '[' && b == ']') || (a == '{' && b == '}');
}

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;
    int open_braces = 0;

    for (char c : paren_string) {
        if (open_braces > 0 || current_group.empty()) {
            current_group.push_back(c);
        } else {
            if (issame(current_group.front(), c)) {
                current_group.push_back(c);
                if (current_group.size() == 2 * open_braces) {
                    result.push_back(current_group);
                    current_group = "";
                }
            } else {
                result.push_back(current_group);
                current_group = "";
                current_group.push_back(c);
                open_braces = 1;
            }
        }
    }

    if (!current_group.empty()) {
        result.push_back(current_group);
    }

    return result;
}