int countOpen = 0, countClose = 0;

for (const string& s : lst) {
    for (char c : s) {
        if (c == '(') countOpen++;
        else if (c == ')') countClose++;
    }
}

if (countOpen > countClose) return "Yes";
else if (countOpen < countClose) return "No";
else {
    int open = 0, close = 0;
    for (const string& s : lst) {
        for (char c : s) {
            if (c == '(') open++;
            else if (c == ')') close++;
        }
    }
    if ((open > 0 && close > 0) || (open == close)) return "Yes";
    else return "No";
}