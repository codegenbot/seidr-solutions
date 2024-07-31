int n = 0;
for (char& c : brackets) {
    if (c == '<') {
        n++;
    } else if (c == '>') {
        n--;
        if (n < 0) {
            return false;
        }
    }
}
return n == 0;
}