vector<string> separate_paren_groups(string paren_string) {
    vector<string> groups;
    string group;
    int count = 0;
    for (char c : paren_string) {
        if (c == '(') {
            if (count > 0) {
                group.push_back(c);
            }
            count++;
        } else if (c == ')') {
            count--;
            if (count > 0) {
                group.push_back(c);
            } else {
                groups.push_back(group);
                group.clear();
            }
        }
    }
    return groups;
}