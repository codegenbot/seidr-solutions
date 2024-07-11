Here is the solution:

int count_upper(string s) {
    int count = 0;
    for (int i = 1; i < s.length(); i += 2) {
        if (isupper(s[i])) {
            char c = toupper(s[i]);
            if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                count++;
            }
        }
    }
    return count;
}