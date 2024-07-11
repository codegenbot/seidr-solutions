int countOpen = 0, countClose = 0;

for (const string& s : lst) {
    for (char c : s) {
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

return countOpen == countClose ? "Yes" : "No";