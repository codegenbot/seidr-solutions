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

    if (countOpen == countClose && !lst.empty())
        return "Yes";
    else if (!lst.empty())
        return "No matching parenthesis found";
    else
        return "Input string is empty";
}