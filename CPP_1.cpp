vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string group;
    int open_count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (open_count > 0) {
                result.push_back(group);
                group = "";
            }
            open_count++;
        } else if (c == ')') {
            open_count--;
            if (open_count == 0) {
                result.push_back(group + "()");
                group = "";
            } else {
                group += ')';
            }
        } else if (open_count > 0) {
            group += c;
        }
    }

    return result;
}