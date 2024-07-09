bool openCount = 0, closeCount = 0;

for (int i = 0; i < lst.size(); i++) {
    for (char c : lst[i]) {
        if (c == '(') {
            openCount++;
        } else if (c == ')') {
            closeCount++;
        }
    }
}

if (openCount == closeCount)
    return "Yes";
else
    return "No";