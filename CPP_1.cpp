vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;
    bool in_group = false;

    for (char ch : paren_string) {
        if (ch == '(') {
            if (in_group) {
                result.push_back(current_group);
                current_group = "";
            }
            in_group = true;
        } else if (ch == ')') {
            in_group = false;
            result.push_back(current_group);
            current_group = "";
        } else if (in_group) {
            current_group += ch;
        }
    }

    if (!current_group.empty()) {
        result.push_back(current_group);
    }

    return result;
}