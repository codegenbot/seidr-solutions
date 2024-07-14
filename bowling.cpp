int bowlingScore(string frames) {
    int score = 0;
    for (int i = 0; i < frames.size(); i++) {
        if (frames[i] == 'X') {
            score += 30;
            i++;
            if (i < frames.size() && frames[i] != '/') {
                if (frames[i] == 'X') {
                    score += 30;
                } else {
                    int add = 10 - ('0' - (frames[i] - '0'));
                    score += add;
                }
            }
        } else if (frames[i] == '/') {
            score += 10 + (10 - ('0' - (frames[i+1] - '0')));
            i++;
        } else {
            int add = 10 - ('0' - (frames[i] - '0'));
            score += add;
        }
    }
    return score;
}