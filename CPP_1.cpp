vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;
    int balance = 0;

    for (char c : paren_string) {
        if (c == ' ') continue;
        current_group += c;
        if (c == '(') balance++;
        if (c == ')') balance--;
        if (balance == 0 && !current_group.empty()) {
            result.push_back(current_group);
            current_group.clear();
        }
    }

    return result;
}