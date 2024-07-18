vector<string> result;
    string current_group = "";
    int balance = 0;

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
            } else if (balance == 0 && !current_group.empty()) {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}