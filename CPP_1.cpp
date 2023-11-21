vector<string> separate_paren_groups(string paren_string) {
    vector<string> groups;
    string current_group = "";
    int count = 0;

    for (int i = 0; i < paren_string.length(); i++) {
        if (paren_string[i] == '(') {
            count++;
            current_group += "(";
        }
        else if (paren_string[i] == ')') {
            count--;
            current_group += ")";
            if (count == 0) {
                groups.push_back(current_group);
                current_group = "";
            }
        }
    }

    return groups;
}