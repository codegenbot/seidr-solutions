bool issame(char a, char b) {
    return (a == '(' && b == ')');
}

vector<string> separate_paren_groups(string paren_string);

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;

    for (char c : paren_string) {
        if (current_group.empty() || !issame(current_group.back(), c)) {
            current_group += c;
        } else {
            result.push_back(current_group);
            current_group = "";
        }
    }

    return result;
}