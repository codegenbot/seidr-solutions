vector<string> separate_paren_groups(string paren_string){
    vector<string> result;
    string current_group = "";
    int open_braces = 0;

    for (int i = 0; i < paren_string.length(); i++) {
        if (paren_string[i] == '(') {
            open_braces++;
        } else if (paren_string[i] == ')') {
            open_braces--;
        }

        current_group += paren_string[i];

        if (open_braces == 0 && !current_group.empty()) {
            result.push_back(current_group);
            current_group = "";
        }
    }

    return result;
}