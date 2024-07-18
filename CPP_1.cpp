vector<string> groups;
    string group;
    int count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (count > 0) {
                groups.push_back(group);
                group = "";
            }
            count++;
        } else if (c == ')') {
            count--;
            if (count == 0) {
                groups.push_back(group + "()");
                group = "";
            }
        } else {
            if (count > 0) {
                group += c;
            }
        }
    }

    return groups;
}