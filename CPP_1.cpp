vector<string> result;
    string current_group;
    int open_braces = 0;

    for (char c : paren_string) {
        if (c == '(') {
            open_braces++;
            if (open_braces > 1) {
                current_group.push_back(c);
            }
        } else if (c == ')') {
            open_braces--;
            if (open_braces > 0) {
                current_group.push_back(c);
            } else {
                result.push_back(current_group);
                current_group.clear();
            }
        }
    }

    return result;
}