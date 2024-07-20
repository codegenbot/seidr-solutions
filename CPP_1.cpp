vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string group;
    int balance = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (balance > 0) {
                group += c;
            }
            balance++;
        } else if (c == ')') {
            balance--;
            if (balance > 0) {
                group += c;
            } else if (balance == 0) {
                result.push_back(group);
                group = "";
            }
        }
    }

    return result;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}