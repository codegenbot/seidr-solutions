int getBonusRoll(string s, int i) {
    for(int j = i + 2; ; j++) {
        if (!isdigit(s[j])) {
            if (s[j] == '+' || s[j] == '-') {
                return min(j - i - 1, 9);
            } else {
                return 0;
            }
        }
    }
    return 0;
}