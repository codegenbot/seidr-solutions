int countOpen = 0;
for (auto str : lst) {
    for (char c : str) {
        if (c == '(') countOpen++;
        else if (countOpen > 0) countOpen--;
    }
}
return countOpen == 0 ? "Yes" : "No";