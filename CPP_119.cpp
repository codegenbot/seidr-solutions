int open = 0;
for (string s : lst) {
    for (char c : s) {
        if (c == '(') {
            open++;
        } else {
            if (open > 0) {
                open--;
            } else {
                return "No";
            }
        }
    }
}
if (open == 0) {
    return "Yes";
} else {
    return "No";
}