vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group = "";
    bool in_group = false;

    for (char c : paren_string) {
        if (c == '(') {
            in_group = true;
            current_group += c;
        } else if (c == ')') {
            if (in_group) {
                current_group += c;
                result.push_back(current_group);
                in_group = false;
                current_group = "";
            }
        } else {
            continue;
        }
    }

    return result;
}