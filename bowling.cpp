int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            int strikeCount = 1;
            int j = i + 1;
            while (j < s.length() && s[j] != '/') {
                strikeCount++;
                j++;
            }
            score += 10 + strikeCount * 10;
        } else {
            int firstRoll = s[i] - '0';
            int secondRoll = s[++i] - '0';
            if (s[i+1] == '/') i++; // skip '/'
            score += firstRoll + secondRoll;
        }
    }
    return score;
}