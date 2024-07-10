int bowlingScore(string frames) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (frames[i] == 'X') {
            score += 30;
        } else if (frames[i] == '/') {
            score += 10 + score % 10;
        } else {
            int frameScore = 0;
            for (int j = i; j < i+2; j++) {
                if (j >= frames.length()) break;
                if (frames[j] == 'X') frameScore += 30;
                else if (frames[j] == '/') frameScore += 10;
                else frameScore += frames[j] - '0';
            }
            score += frameScore;
        }
    }
    return score;
}