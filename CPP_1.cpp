vector<string> result;
    string group;
    int openCount = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (openCount > 0) {
                result.push_back(group);
                group = "";
            }
            openCount++;
        } else if (c == ')') {
            openCount--;
            if (openCount == 0) {
                result.push_back(group + "()");
                group = "";
            }
        } else if (openCount > 0) {
            group += c;
        }
    }

    return result;
}