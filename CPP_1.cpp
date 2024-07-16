vector<string> result;
    string current_group;
    int level = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (level > 0) {
                current_group += c;
            }
            level++;
        } else if (c == ')') {
            level--;
            if (level > 0) {
                current_group += c;
            } else {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}