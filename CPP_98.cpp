Here is the completed code:

int count_upper(string s) {
    int count = 0;
    for (int i = 1; i < s.length(); i += 2) {
        if (ispunct(s[i])) {
            count++;
        }
    }
    return count;
}