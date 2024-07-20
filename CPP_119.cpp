bool isOpen(char c) {
    return c == '(';
}

int countOpen(string s) {
    int count = 0;
    for (char c : s) {
        if (isOpen(c)) {
            count++;
        } else if (count > 0) {
            count--;
        }
    }
    return count;
}

string match_parens(vector<string> lst) {
    int openCount1 = countOpen(lst[0]);
    int openCount2 = countOpen(lst[1]);
    if (openCount1 == openCount2) {
        return "Yes";
    } else if (openCount1 > 0 && openCount2 == 0) {
        return "No";
    } else {
        return "Yes";
    }
}