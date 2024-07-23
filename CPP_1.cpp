vector<string> result;
    string current_group;

    for (char c : paren_string) {
        if (c == '(') {
            if (!current_group.empty()) {
                result.push_back(current_group);
            }
            current_group = "(";
        } else if (c == ')') {
            current_group += ')';
            result.push_back(current_group);
            current_group.clear();
        }
    }

    return result;
}