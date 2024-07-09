int countOpen = 0, countClose = 0;

for (const auto& s : lst) {
    for (char c : s) {
        if (c == '(') {
            countOpen++;
        } else if (c == ')') {
            countClose++;
        }
    }
}

if ((countOpen == countClose) && (countOpen % 2 == 0)) {
    return "Yes";
} else {
    return "No";
}