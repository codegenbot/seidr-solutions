vector<string> groups;
    string current_group;
    int open_paren_count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            open_paren_count++;
            if (open_paren_count == 1) {
                current_group.clear();
            }
        } else if (c == ')') {
            open_paren_count--;
            if (open_paren_count == 0) {
                groups.push_back(current_group);
            }
        }

        if (open_paren_count > 0) {
            current_group.push_back(c);
        }
    }

    return groups;
}