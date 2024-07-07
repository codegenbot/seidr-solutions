int countOpen = 0, countClose = 0;

for (const auto& s : lst) {
    for (char c : s) {
        if (c == '(') {
            countOpen++;
        } else {
            countClose++;
        }
    }
}

if ((countOpen == countClose + 1) || (countOpen == countClose)) {
    return "Yes";
} else {
    return "No";
}