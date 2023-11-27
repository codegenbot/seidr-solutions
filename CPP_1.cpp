vector<string> separate_paren_groups(string paren_string) {
    vector<string> groups;
    string group;
    int open_braces = 0;

    for (char c : paren_string) {
        if (c == '(') {
            open_braces++;
            if (open_braces == 1) {
                group += c;
            }
        } else if (c == ')') {
            open_braces--;
            if (open_braces == 0) {
                group += c;
                groups.push_back(group);
                group = "";
            }
        } else if (open_braces > 0) {
            group += c;
        }
    }

    return groups;
}