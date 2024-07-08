std::vector<std::string> separate_paren_groups(const std::string& input) {
    std::vector<std::string> groups;
    int count = 0;
    std::string group;

    for (char c : input) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            count--;
        }

        group.push_back(c);

        if (count == 0) {
            groups.push_back(group);
            group.clear();
        }
    }

    return groups;
}