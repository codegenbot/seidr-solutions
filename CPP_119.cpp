int count_open(string s) {
    int open = 0;
    for (char c : s) {
        if (c == '(') {
            open++;
        }
    }
    return open;
}

string match_parens(vector<string> lst) {
    int open1 = count_open(lst[0]);
    int close1 = count_open(lst[1]);

    if ((open1 > 0 && close1 > 0) || (open1 == 0 && close1 == 0)) {
        return "No";
    }

    if (open1 - close1 == 1) {
        return "Yes";
    } else {
        return "No";
    }
}