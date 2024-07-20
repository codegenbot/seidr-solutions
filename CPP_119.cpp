int countOpen = 0;
int countClose = 0;

for (const string& s : lst) {
    for (char c : s) {
        if (c == '(') {
            countOpen++;
        } else if (c == ')') {
            countClose++;
        }
    }
}

if ((countOpen + countClose) % 2 == 0) {
    return "Yes";
} else {
    return "No";
}