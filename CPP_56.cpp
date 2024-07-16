int openCount = 0;
for (char bracket : brackets) {
    if (bracket == '<') {
        openCount++;
    } else if (bracket == '>') {
        if (openCount == 0) {
            return false;
        }
        openCount--;
    }
}
return openCount == 0;
}