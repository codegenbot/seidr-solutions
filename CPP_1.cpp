vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;
    bool inside_group = false;

    for (char c : paren_string) {
        if (c == '(') {
            inside_group = true;
            current_group += c;
        } else if (c == ')') {
            inside_group = false;
            current_group += c;
            result.push_back(current_group);
            current_group = "";
        } else if (inside_group) {
            current_group += c;
        }
    }

    return result;
}