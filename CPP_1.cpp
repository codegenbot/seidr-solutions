vector<string> groups;
    string group;
    int open_count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (open_count > 0) {
                groups.push_back(group);
                group = "";
            }
            open_count++;
        }
        else if (c == ')') {
            open_count--;
            group += c;
            if (open_count == 0) {
                groups.push_back(group);
                group = "";
            }
        }
        else if (open_count > 0) {
            group += c;
        }
    }

    return groups;
}