vector<string> groups;
    string curr_group;
    int balance = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (balance > 0) {
                curr_group += c;
            }
            balance++;
        } else if (c == ')') {
            balance--;
            if (balance > 0) {
                curr_group += c;
            } else if (balance == 0) {
                groups.push_back(curr_group);
                curr_group = "";
            }
        }
    }

    return groups;
}