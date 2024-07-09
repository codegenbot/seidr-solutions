vector<string> result;
    string group;
    int open_count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            open_count++;
            if (open_count > 1) {
                group += c;
            }
        } else if (c == ')') {
            open_count--;
            if (open_count == 0) {
                result.push_back(group);
                group = "";
            } else {
                group += c;
            }
        }
    }

    return result;
}