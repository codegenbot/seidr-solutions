vector<string> separate_paren_groups(const vector<string>& a, vector<string> b) {
    vector<string> result;
    string current_group = "";
    int balance = 0;

    for (string paren_string : b) {
        for (char c : paren_string) {
            if (c == '(') {
                if (balance > 0) {
                    current_group += c;
                }
                balance++;
            } else if (c == ')') {
                balance--;
                if (balance > 0) {
                    current_group += c;
                } else if (balance == 0) {
                    result.push_back(current_group);
                    current_group = "";
                }
            }
        }
    }

    return result;
}