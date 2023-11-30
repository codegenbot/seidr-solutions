vector<string> separate_paren_groups(string paren_string) {
    vector<string> groups;
    string group;
    int count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            count--;
        } else if (c == ' ') {
            continue;
        }

        group += c;

        if (count == 0) {
            groups.push_back(group);
            group = "";
        }
    }

    return groups;
}