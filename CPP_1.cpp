vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current;
    int open_count = 0;

    for (char ch : paren_string) {
        if (ch == ' ') continue;
        current += ch;
        if (ch == '(') {
            open_count++;
        } else if (ch == ')') {
            open_count--;
        }
        if (open_count == 0 && !current.empty()) {
            result.push_back(current);
            current.clear();
        }
    }

    return result;
}