int countOpenParens = 0;
for (const string& s : lst) {
    for (char c : s) {
        if (c == '(') {
            countOpenParens++;
        } else if (c == ')') {
            if (countOpenParens == 0) {
                return "No";
            }
            countOpenParens--;
        }
    }
}
return countOpenParens == 0 ? "Yes" : "No";