vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;
    int opened = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (opened > 0) {
                current_group.push_back(c);
            }
            opened++;
        } else if (c == ')') {
            opened--;
            if (opened > 0) {
                current_group.push_back(c);
            } else {
                result.push_back(current_group);
                current_group.clear();
            }
        }
    }

    return result;
}