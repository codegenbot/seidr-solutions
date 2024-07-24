vector<string> result;
    string current = "";
    int balance = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (balance > 0) {
                current += c;
            }
            balance++;
        } else if (c == ')') {
            balance--;
            if (balance > 0) {
                current += c;
            } else {
                if (!current.empty()) {
                    result.push_back(current);
                    current = "";
                }
            }
        }
    }

    return result;
}