vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string curr_group;

    for (char c : paren_string) {
        if (c == '(') {
            if (!curr_group.empty()) {
                result.push_back(curr_group);
                curr_group.clear();
            }
        }
        if (c == '(' || c == ')') {
            curr_group.push_back(c);
        }
    }

    if (!curr_group.empty()) {
        result.push_back(curr_group);
    }

    return result;
}