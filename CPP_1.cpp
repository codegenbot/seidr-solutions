vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string cur_group;
    int open_paren_count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            open_paren_count++;
            if (open_paren_count > 1) {
                cur_group += c;
            }
        } else if (c == ')') {
            open_paren_count--;
            if (open_paren_count > 0) {
                cur_group += c;
            } else {
                result.push_back(cur_group);
                cur_group = "";
            }
        }
    }

    return result;
}