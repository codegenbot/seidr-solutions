std::vector<std::string> separate_paren_groups(std::string input) {
    std::vector<std::string> groups;
    int level = 0;
    std::string current_group;

    for (char c : input) {
        if (c == '(') {
            level++;
            if (level > 1) {
                current_group += c;
            }
        } else if (c == ')') {
            level--;
            if (level > 0) {
                current_group += c;
            } else {
                if (!current_group.empty()) {
                    groups.push_back(current_group);
                    current_group.clear();
                }
            }
        }
    }

    return groups;
}