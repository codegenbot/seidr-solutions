vector<string> separate_paren_groups(string paren_string) {
    vector<string> groups;
    string group;
    int open = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (open > 0) {
                group += c;
            }
            open++;
        } else if (c == ')') {
            open--;
            if (open > 0) {
                group += c;
            } else {
                if (!group.empty()) {
                    groups.push_back(group);
                    group.clear();
                }
            }
        }
    }

    return groups;
}