int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (isdigit(s[i])) {
            int strikeFrames = 1;
            while (i + strikeFrames < s.length() && !isdigit(s[i + strikeFrames])) {
                strikeFrames++;
            }
            int strikeScore = strikeFrames * 10;
            score += strikeScore;
            i += strikeFrames - 1;
        } else if (s[i] == '/') {
            int spareFrames = 2;
            while (i + spareFrames < s.length() && !isdigit(s[i + spareFrames])) {
                spareFrames++;
            }
            int spareScore = 10 + (spareFrames * 5);
            score += spareScore;
            i += spareFrames - 1;
        } else {
            int frames = 0;
            while (i + frames < s.length() && isdigit(s[i + frames])) {
                frames++;
            }
            score += frames * 10;
            i += frames - 1;
        }
    }
    return score;
}