int countOpen = 0;
for (const string& str : lst) {
    int countClose = 0;
    for (char c : str) {
        if (c == '(') {
            countOpen++;
        } else if (c == ')') {
            countClose++;
        }
    }
    if (countOpen != countClose) {
        return "No";
    }
}
if ((lst[0].size() + lst[1].size()) % 2 == 1) {
    return "No";
}
return "Yes";