int opening = 0;
for (char c : str) {
    if (c == '[') {
        opening++;
    } else if (c == ']') {
        opening--;
        if (opening < 0) {
            return true;
        }
    }
}
return false;
}