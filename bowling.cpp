int bowlingScore(string s) {
    int score = 0;
    bool strike = false;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
            strike = true;
        } else if (s[i] == '/') {
            score += 10;
            strike = false;
        } else {
            int frameScore = 0;
            for (int j = i; j < i + 3 && j < s.size(); j++) {
                if (s[j] == 'X') {
                    frameScore += 30;
                    break;
                } else if (s[j] == '/') {
                    frameScore += 10;
                    break;
                }
            }
            score += frameScore;
        }
    }
    return score;
}