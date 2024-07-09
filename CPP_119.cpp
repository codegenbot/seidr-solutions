int match_parens(vector<string> lst) {
    int countOpen = 0, countClose = 0;

    if (lst.empty()) {
        return "Please enter a valid input";
    }

    for (auto str : lst) {
        for (char c : str) {
            if (c == '(')
                countOpen++;
            else
                countClose++;
        }
    }

    if (countOpen == countClose)
        return "Yes";
    else
        return "No";
}