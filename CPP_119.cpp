int countOpen = 0, countClose = 0;

for (auto str : lst) {
    for (char c : str) {
        if (c == '(') {
            countOpen++;
        } else if (c == ')') {
            if (countOpen > 0) {
                countOpen--;
            } else {
                countClose++;
            }
        }
    }
}

if (countOpen == countClose) {
    return "Yes";
} else {
    return "No";
}