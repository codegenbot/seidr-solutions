vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string group;
    bool in_group = false;

    for (char c : paren_string) {
        if (c == '(') {
            in_group = true;
            group = "(";
        } else if (c == ')' && in_group) {
            group += ")";
            result.push_back(group);
            in_group = false;
        } else if (in_group) {
            group += c;
        }
    }

    return result;
}