bool isOpen(char c) {
    return c == '(';
}

int countOpen(string s) {
    int count = 0;
    for (char c : s) {
        if (isOpen(c)) {
            count++;
        }
    }
    return count;
}

string match_parens(vector<string> lst) {
    int open1 = countOpen(lst[0]);
    int close1 = lst[0].size() - open1;
    int open2 = countOpen(lst[1]);
    int close2 = lst[1].size() - open2;

    if ((open1 == 0 && close2 > 0) || (open2 == 0 && close1 > 0)) {
        return "No";
    }

    if (open1 + open2 == close1 + close2) {
        return "Yes";
    } else {
        return "No";
    }
}