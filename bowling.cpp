int bowlingScore(string frames) {
    int score = 0;
    int roll1, roll2;
    for (int i = 0; i < 10; i++) {
        if (frames[i] == '/') {
            roll1 = frames[i-1]-'0';
            roll2 = 10 - roll1;
        } else if (frames[i] == 'X') {
            score += 10 + (i > 0 ? bowlingScore(frames.substr(0, i)) : 0);
            continue;
        }
        roll1 = frames[i] - '0';
        if (i < 8 && frames[i+1] != '/') {
            roll2 = frames[i+1]-'0';
        } else if (frames[i+1] == '/') {
            roll2 = 10 - roll1;
        }
        score += roll1 + (roll2 > 0 ? roll2 : 0);
    }
    return score;
}