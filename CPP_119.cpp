bool checkBalance(string s) {
    int count = 0;
    for (char c : s) {
        if (c == '(')
            count++;
        else if (count > 0)
            count--;
    }
    return count == 0;
}

string match_parens(vector<string> lst) {
    string first = lst[0], second = lst[1];
    if (checkBalance(first + second))
        return "Yes";
    if (checkBalance(second + first))
        return "Yes";
    return "No";
}