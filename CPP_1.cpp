vector<string> result;
    string curr_group;
    int open_brace = 0;

    for (char c : paren_string) {
        if (c == '(') {
            open_brace++;
            if (open_brace > 1) {
                curr_group += "(";
            }
        }
        else if (c == ')') {
            open_brace--;
            if (open_brace > 0) {
                curr_group += ")";
            }
            if (open_brace == 0) {
                result.push_back(curr_group);
                curr_group = "";
            }
        }
    }

    return result;
}