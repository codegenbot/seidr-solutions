int match_parens(vector<string> lst) {
    int countOpen = 0, countClose = 0;

    for (auto str : lst) {
        for (char c : str) {
            if (c == '(')
                countOpen++;
            else
                countClose++;
        }
    }

    if (countOpen == countClose)
        return "All parentheses are balanced.\n";
    else
        return "The parentheses do not match.\n";