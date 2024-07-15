vector<string> separate_paren_groups(string paren_string) {
    vector<string> groups;
    string group;
    bool inGroup = false;

    for (char c : paren_string) {
        if (c == '(') {
            if (!group.empty()) {
                groups.push_back(group);
                group.clear();
            }
            inGroup = true;
        } else if (c == ')') {
            if (inGroup) {
                groups.push_back("(" + group + ")");
                group.clear();
                inGroup = false;
            }
        } else if (inGroup) {
            group += c;
        }
    }

    if (!group.empty()) {
        groups.push_back(group);
    }

    return groups;
}