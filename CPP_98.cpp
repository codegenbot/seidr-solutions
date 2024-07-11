Here is the completed code:

int count_upper(string s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (i % 2 == 0 && isupper(s[i])) {
            char c = toupper(s[i]);
            if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                count++;
            }
        }
    }
    return count;
}