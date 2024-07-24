string match_parens(vector<string> lst) {
    string s1 = lst[0];
    string s2 = lst[1];

    int open_count = 0;
    int close_count = 0;

    for (char c : s1) {
        if (c == '(') {
            open_count++;
        } else if (c == ')') {
            close_count++;
        }
    }

    for (char c : s2) {
        if (c == '(') {
            open_count++;
        } else if (c == ')') {
            close_count--;
        }
    }

    if (open_count == close_count) {
        return "Yes";
    } else {
        return "No";
    }
}