bool issame(char c1, char c2) {
    if (isalpha(c1) && isalpha(c2)) {
        return tolower(c1) == tolower(c2);
    } else {
        return c1 == c2;
    }
}