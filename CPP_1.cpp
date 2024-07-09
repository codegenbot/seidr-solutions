std::vector<std::string> separate_paren_groups(const std::string& s) {
    std::vector<std::string> result;
    std::string group;

    for (char c : s) {
        if (c == '(') {
            group += c;
        } else if (c == ')') {
            group += c;
            result.push_back(group);
            group.clear();
        }
    }

    return result;