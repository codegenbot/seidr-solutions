vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string group;
    int count = 0;

    for (char ch : paren_string) {
        if (ch == '(') {
            if (count > 0) {
                group += ch;
            }
            count++;
        } else if (ch == ')') {
            count--;
            if (count > 0) {
                group += ch;
            } else if (count == 0) {
                result.push_back(group);
                group = "";
            }
        }
    }

    return result;
}