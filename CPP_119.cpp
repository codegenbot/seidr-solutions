int openCount = 0;
int closeCount = 0;

for (const string &s : lst) {
    for (char c : s) {
        if (c == '(') {
            openCount++;
        } else if (c == ')') {
            closeCount++;
        }
    }
}

if (openCount > closeCount) {
    return "No";
}
else if (closeCount > openCount) {
    return "No";
} else {
    return "Yes";
}