int openCount = 0;
for (const string& s : lst) {
    for (char c : s) {
        if (c == '(') {
            openCount++;
        } else if (c == ')') {
            if (openCount <= 0) return "No";
            openCount--;
        }
    }
}
if (openCount > 0) return "No";
return "Yes";