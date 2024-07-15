bool issame(string group) {
    int count = 0;
    for (char c : group) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            count--;
        }
    }
    return count == 0;
}

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;
    int open_braces = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (open_braces > 0) {
                current_group.push_back(c);
            }
            open_braces++;
        } else if (c == ')') {
            open_braces--;
            if (open_braces > 0) {
                current_group.push_back(c);
            } else {
                if (issame(current_group)) {
                    result.push_back(current_group);
                }
                current_group = "";
            }
        }
    }

    return result;
}