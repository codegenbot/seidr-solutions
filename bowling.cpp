int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            int nextTwo = (i + 2 < s.length() ? stoi(s.substr(i + 1, 2)) : 0);
            score += (10 - i) * (10 - i) + nextTwo;
        } else {
            int thisFrame = 0;
            for (int j = i; j < s.length(); j++) {
                if (s[j] == '/') break;
                thisFrame *= 10;
                thisFrame += s[j] - '0';
            }
            score += thisFrame;
        }
    }
    return score;
}