vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;
    int open_braces = 0;

    for (char ch : paren_string) {
        if (ch == '(') {
            if (open_braces > 0) {
                current_group += ch;
            }
            open_braces++;
        } else if (ch == ')') {
            open_braces--;
            if (open_braces > 0) {
                current_group += ch;
            } else if (open_braces == 0) {
                result.push_back(current_group);
                current_group.clear();
            }
        }
    }

    return result;
}