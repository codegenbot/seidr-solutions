vector<string> groups;
    string group;
    int balance = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (balance == 0) {
                if (!group.empty()) {
                    groups.push_back(group);
                }
                group = "(";
            } else {
                group += "(";
            }
            balance++;
        } else if (c == ')') {
            balance--;
            group += ")";
            if (balance == 0) {
                groups.push_back(group);
                group = "";
            }
        }
    }

    if (!group.empty()) {
        groups.push_back(group);
    }

    return groups;
}