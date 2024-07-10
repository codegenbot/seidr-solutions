vector<string> separate_paren_groups(string paren_string) {
    vector<string> groups;
    string current_group;

    for (char c : paren_string) {
        if (c == '(') {
            if (!current_group.empty()) {
                groups.push_back(current_group);
                current_group = "";
            }
        }
        if (c == '(' || c == ')') {
            current_group += c;
        }
    }

    if (!current_group.empty()) {
        groups.push_back(current_group);
    }

    return groups;
}