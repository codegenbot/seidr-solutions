vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;
    bool inside_group = false;

    for (char c : paren_string) {
        if (c == '(') {
            inside_group = true;
        } else if (c == ')') {
            inside_group = false;
            result.push_back(current_group);
            current_group.clear();
        } else if (inside_group) {
            current_group.push_back(c);
        }
    }

    return result;
}