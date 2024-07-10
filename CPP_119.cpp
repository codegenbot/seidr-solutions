int countOpen = 0;
int countClose = 0;

for (const string& str : lst) {
    for (char c : str) {
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