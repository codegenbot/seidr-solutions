string result = s;
    for (char &c : result) {
        if (isalpha(c)) {
            char base;
            if (isupper(c)) {
                base = 'A';
            } else {
                base = 'a';
            }
            c = ((c - base) * 2 + 2) % 26 + base;
        }
    }
    return result;
}