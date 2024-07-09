int countOpen = 0, countClose = 0;

for (const string& s : lst) {
    for (char c : s) {
        if (c == '(') countOpen++;
        else countClose++;
    }
}

if (countOpen > countClose || countClose > countOpen + 1)
    return "No";
return "Yes";