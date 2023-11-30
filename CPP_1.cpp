vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string group = "";
    int openCount = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (openCount > 0) {
                group += c;
            }
            openCount++;
        } else if (c == ')') {
            openCount--;
            if (openCount > 0) {
                group += c;
            } else {
                result.push_back(group);
                group = "";
            }
        }
    }

    return result;
}