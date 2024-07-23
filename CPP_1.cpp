vector<string> result;
    string group;
    int open_count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (open_count > 0) {
                result.push_back(group);
                group = "";
            }
            open_count++;
        } else if (c == ')') {
            open_count--;
            result.push_back(group + ")");
            group = "";
        } else {
            group += c;
        }
    }

    if (!group.empty()) {
        result.push_back(group);
    }

    return result;
}