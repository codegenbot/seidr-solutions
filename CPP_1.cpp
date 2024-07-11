vector<string> groups;
    string current_group;
    int depth = 0;

    for (char c : paren_string) {
        if (c == '(') {
            depth++;
            if (depth > 1) {
                current_group += c;
            }
        } else if (c == ')') {
            depth--;
            if (depth >= 1) {
                current_group += c;
            }
            if (depth == 0) {
                groups.push_back(current_group);
                current_group = "";
            }
        }
    }

    return groups;
}