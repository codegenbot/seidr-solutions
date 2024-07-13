int bowlingScore(string input) {
    int score = 0;
    bool firstBallInFrame = true;
    int frame = 1;
    
    for (char c : input) {
        if (c == '/') {
            if (firstBallInFrame) {
                score += 10 - ('X' - '0');
            } else {
                score += min(10 - ('X' - '0'), stoi(string() + c));
            }
            firstBallInFrame = true;
        } else if (c == 'X') {
            score += 10;
            frame++;
            firstBallInFrame = true;
        } else {
            int ball =stoi(string() + c);
            if (firstBallInFrame) {
                score += ball;
                firstBallInFrame = false;
            } else {
                if (ball == 10) {
                    score += 10;
                    frame++;
                    firstBallInFrame = true;
                } else {
                    score += min(10, ball);
                    firstBallInFrame = false;
                }
            }
        }
    }
    
    return score;
}