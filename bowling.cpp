int bowlingScore(string s) {
    int score = 0;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == '/') {
            string strikeOrSpare = "";
            for (; i < s.length() && s[i] != '/'; i++) {
                strikeOrSpare += s[i];
            }
            int strikeOrSpareValue = 0;
            if (strikeOrSpare.length() > 1) {
                strikeOrSpareValue = strikeOrSpare[0] - '0' + strikeOrSpare[1] - '0';
            } else {
                strikeOrSpareValue = strikeOrSpare[0] - '0';
            }
            score += (10 - strikeOrSpareValue);
        } else if (s[i] == 'X') {
            score += 10;
        } else {
            int value = s[i] - '0';
            score += value;
        }
        i++;
    }
    return score;
}