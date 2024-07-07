bool hasOpen = false;
int openCount = 0;

for (const string& s : lst) {
    for (char c : s) {
        if (c == '(') {
            if (hasOpen) return "No";
            hasOpen = true;
            openCount++;
        } else if (c == ')') {
            if (!hasOpen) return "No";
            hasOpen = false;
            openCount--;
        }
    }
}

return openCount == 0 ? "Yes" : "No";