int bowling(string s) {
    int score = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            int temp = 10 - (s[i + 1] - '0' + s[i + 2] - '0');
            score += temp;
            i++;
        } else {
            score += s[i] - '0';
        }
    }
    return score;
}