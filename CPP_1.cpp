vector<string> result;
    string current_group;
    int open_paren_count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            open_paren_count++;
            if (open_paren_count > 1) {
                current_group += c;
            }
        } else if (c == ')') {
            open_paren_count--;
            if (open_paren_count == 0) {
                result.push_back(current_group);
                current_group.clear();
            } else {
                current_group += c;
            }
        }
    }

    return result;
}