bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> separate_paren_groups(string paren_string) {
    vector<string> groups;
    int count = 0;
    string current_group = "";
    for (char c : paren_string) {
        if (c == '(') {
            if (count > 0) {
                current_group += c;
            }
            count++;
        } else if (c == ')') {
            count--;
            if (count > 0) {
                current_group += c;
            } else if (count == 0) {
                groups.push_back(current_group);
                current_group = "";
            }
        }
    }
    return groups;
}