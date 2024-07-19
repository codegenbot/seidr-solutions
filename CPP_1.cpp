vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string group;
    bool inGroup = false;

    for (char c : paren_string) {
        if (c == '(') {
            if (inGroup) {
                result.push_back(group);
                group = "";
            }
            inGroup = true;
        } else if (c == ')') {
            if (inGroup) {
                result.push_back(group + ")");
                group = "";
            }
            inGroup = false;
        } else if (inGroup) {
            group += c;
        }
    }

    if (!group.empty()) {
        result.push_back(group);
    }

    return result;
}