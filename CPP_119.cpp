int countOpen = 0;
int countClose = 0;

for (const auto& str : lst) {
    for (char c : str) {
        if (c == '(') {
            countOpen++;
        } else if (c == ')') {
            countClose++;
        }
    }
}

if ((countOpen + countClose) % 2 != 0) {
    return "No";
} else if (countOpen < countClose) {
    return "No";
} else {
    return "Yes";
}