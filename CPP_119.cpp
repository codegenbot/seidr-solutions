string match_parens(vector<string>& lst) {
    int open = 0, close = 0;
    for (vector<string>::iterator it = lst.begin(); it != lst.end(); ++it) {
        for (string::iterator c = it->begin(); c != it->end(); ++c) {
            if (*c == '(') {
                open++;
            } else {
                if (open > 0) {
                    open--;
                } else {
                    close++;
                }
            }
        }
    }
    if (open == 0 && close <= 1) {
        return "Yes";
    } else {
        return "No";
    }
}