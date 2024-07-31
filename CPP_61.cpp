int openCount = 0;
for (char c : brackets) {
    if (c == '(') {
        openCount++;
    } else if (c == ')') {
        if (openCount == 0) {
            return false;
        }
        openCount--;
    }
}
return openCount == 0;
}