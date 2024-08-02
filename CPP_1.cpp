vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group = "";
    int open_brace_count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            open_brace_count++;
            current_group += c;
        } else if (c == ')') {
            open_brace_count--;
            current_group += c;
            if (open_brace_count == 0) {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}