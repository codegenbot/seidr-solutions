int countOpen = 0, countClose = 0;

for (auto str : lst) {
    for (char c : str) {
        if (c == '(') countOpen++;
        else countClose++;
    }
}

if (countOpen == countClose) return "Yes";
else return "No";