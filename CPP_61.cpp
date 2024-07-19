int open_count = 0;
for (char c : brackets) {
    if (c == '(') {
        open_count++;
    } else if (c == ')') {
        if (open_count == 0) {
            return false;
        }
        open_count--;
    }
}
return open_count == 0;
}