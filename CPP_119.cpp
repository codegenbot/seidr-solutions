int countOpen = 0, countClose = 0;

for (const string& s : lst) {
    for (char c : s) {
        if (c == '(') {
            countOpen++;
        } else if (c == ')') {
            countClose++;
        }
    }
}

if (countOpen == countClose) {
    return "Yes";
} else {
    return "No";
}