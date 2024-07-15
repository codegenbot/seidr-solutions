bool issame(char c1, char c2) {
    return (c1 == '(' && c2 == ')');
}

vector<string> separate_paren_groups(const string& paren_string) {
    vector<string> result;
    string current_group;
    int open_braces = 0;

    for (char c : paren_string) {
        if (issame(c, '(')) {
            if (open_braces > 0) {
                current_group += c;
            }
            open_braces++;
        } else if (issame(c, ')')) {
            open_braces--;
            if (open_braces > 0) {
                current_group += c;
            } else {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}