vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;
    int count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            count++;
            if (count == 1) {
                current_group = "(";
            } else {
                current_group += "(";
            }
        } else if (c == ')') {
            count--;
            current_group += ")";
            if (count == 0) {
                result.push_back(current_group);
            }
        }
    }

    return result;
}