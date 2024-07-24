vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group = "";
    int balance = 0;

    for (char c : paren_string) {
        if (c == '(') {
            balance++;
            current_group += c;
        } else if (c == ')') {
            balance--;
            current_group += c;
            if (balance == 0) {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}