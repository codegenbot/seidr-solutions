vector<string> result;
    int n = paren_string.size();
    string group;
    int open = 0;

    for (int i = 0; i < n; i++) {
        if (paren_string[i] == '(') {
            open++;
            group += paren_string[i];
        } else if (paren_string[i] == ')') {
            open--;
            group += paren_string[i];
            if (open == 0) {
                result.push_back(group);
                group = "";
            }
        }
    }

    return result;
}