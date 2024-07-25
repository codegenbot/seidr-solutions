int bowlingScore(string frames) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (frames[i] == 'X') { // strike
            score += 10 + bowlingScore(frames.substr(i+1, 2));
        } else if (frames[i] == '/') { // spare
            score += 10 - frames[i+1]-'0'-'0';
            i++;
        } else {
            int framePoints = frames[i]-'0'*10 + frames[i+1]-'0';
            score += framePoints;
            if (i < 8 && frames[i+2] != 'X' && frames[i+2] != '/') { // open frame
                score += min(frames[i]-'0',frames[i+1]-'0');
            }
        }
    }
    return score;
}