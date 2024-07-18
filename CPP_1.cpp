vector<string> groups;
    int count = 0;
    string currGroup = "";
    for (char c : paren_string) {
        if (c == '(') {
            count++;
            if (count > 1) {
                currGroup += c;
            }
        } else if (c == ')') {
            count--;
            if (count > 0) {
                currGroup += c;
            } else if (count == 0) {
                groups.push_back(currGroup);
                currGroup = "";
            }
        } else if (count > 0) {
            currGroup += c;
        }
    }
    return groups;
}