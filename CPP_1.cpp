vector<string> result;
    string current_group;
    int balance = 0;

    for (char c : paren_string) {
        if (c == '(') {
            balance++;
            if (balance > 1) {
                current_group.push_back(c);
            }
        } else if (c == ')') {
            balance--;
            if (balance >= 1) {
                current_group.push_back(c);
            }
            if (balance == 0) {
                result.push_back(current_group);
                current_group.clear();
            }
        }
    }

    return result;
}