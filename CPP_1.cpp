vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string group;

    for (char c : paren_string) {
        if (c == '(') {
            if (!group.empty()) {
                result.push_back(group);
                group = "";
            }
            group += c;
        } else if (c == ')') {
            group += c;
            result.push_back(group);
            group = "";
        }
    }

    if (!group.empty()) {
        result.push_back(group);
    }

    return result;
}