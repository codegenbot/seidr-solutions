string match_parens(vector<string> lst) {
    int balance1 = 0, balance2 = 0;
    for (char ch : lst[0]) {
        if (ch == '(') balance1++;
        else balance1--;
        if (balance1 < 0) break;
    }
    for (char ch : lst[1]) {
        if (ch == '(') balance2++;
        else balance2--;
        if (balance2 < 0) break;
    }
    if (balance1 == 0 && balance2 == 0) return "Yes";

    swap(lst[0], lst[1]);
    balance1 = balance2 = 0;
    for (char ch : lst[0]) {
        if (ch == '(') balance1++;
        else balance1--;
        if (balance1 < 0) break;
    }
    for (char ch : lst[1]) {
        if (ch == '(') balance2++;
        else balance2--;
        if (balance2 < 0) break;
    }
    if (balance1 == 0 && balance2 == 0) return "Yes";

    return "No";
}