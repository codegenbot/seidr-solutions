vector<string> result;
    string current_group;
    int balance = 0;

    for (char c : paren_string) {
        if (c == '(') {
            balance++;
            if (balance == 1) {
                if (!current_group.empty()) {
                    result.push_back(current_group);
                    current_group = "";
                }
            }
        } else if (c == ')') {
            balance--;
            if (balance == 0) {
                result.push_back(current_group + "()");
                current_group = "";
            }
        } else if (balance > 0) {
            current_group += c;
        }
    }

    if (!current_group.empty()) {
        result.push_back(current_group);
    }

    return result;
}