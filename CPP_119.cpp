int countOpen = 0, countClose = 0;

for (const auto& str : lst) {
    for (char c : str) {
        if (c == '(') {
            countOpen++;
        } else if (c == ')') {
            countClose++;
        }
    }
}

if ((countOpen == 0 && countClose > 0) || (countOpen > countClose)) {
    return "No";
} else {
    return "Yes";
}