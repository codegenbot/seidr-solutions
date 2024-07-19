bool issame(const string& str) {
    return count(str.begin(), str.end(), '(') == count(str.begin(), str.end(), ')');
}

vector<string> separate_paren_groups(string paren_string);

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;

    for (char c : paren_string) {
        if (c == '(' || c == ')') {
            current_group += c;
            if (issame(current_group)) {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}