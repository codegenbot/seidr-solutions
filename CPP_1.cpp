vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string group = "";
    int balance = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (balance == 0) {
                group = "(";
            } else {
                group += "(";
            }
            balance++;
        } else if (c == ')') {
            balance--;
            group += ")";
            if (balance == 0) {
                result.push_back(group);
            }
        }
    }

    return result;
}