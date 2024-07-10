int countOpen = 0, countClose = 0;

for (const auto& str : lst) {
    for (char c : str) {
        if (c == '(') {
            countOpen++;
        } else if (c == ')') {
            if (countOpen == 0) return "No";
            countOpen--;
        }
    }
}

if (countOpen > 0) return "No";

return "Yes";