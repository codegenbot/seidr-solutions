vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;
    bool in_group = false;

    for (char c : paren_string) {
        if (c == '(') {
            in_group = true;
        } else if (c == ')' && in_group) {
            in_group = false;
            result.push_back(current_group);
            current_group = "";
        } else if (in_group) {
            current_group += c;
        }
    }

    return result;
}