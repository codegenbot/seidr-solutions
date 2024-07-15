vector<string> result;
    string current_group;
    int open_braces = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (open_braces > 0) {
                current_group.push_back(c);
            }
            open_braces++;
        } else if (c == ')') {
            open_braces--;
            if (open_braces > 0) {
                current_group.push_back(c);
            } else {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}