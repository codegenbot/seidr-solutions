vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;
    int open_count = 0;

    for (char ch : paren_string) {
        if (ch == '(') {
            ++open_count;
            if (open_count > 1) {
                current_group += ch;
            }
        } else if (ch == ')') {
            --open_count;
            if (open_count == 0) {
                result.push_back(current_group);
                current_group.clear();
            } else {
                current_group += ch;
            }
        }
    }

    return result;
}