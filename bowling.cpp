int bowlingScore(string bowls) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (isdigit(bowls[i])) {
            score += stoi(string(1, bowls[i]));
        } else if (bowls[i] == '/') {
            if (i < 8) {
                int nextFrame = 10 -stoi(string(1, bowls[i + 1])) - stoi(string(1, bowls[i + 2]));
                score += 10 + nextFrame;
                i++;
            }
        } else {
            int firstBall = stoi(string(1, bowls[i]) == 'X' ? 10 : string(1, bowls[i]).digits());
            if (i < 9) {
                if (bowls[i + 1] != '/') {
                    score += firstBall + stoi(string(1, bowls[i + 1]));
                    i++;
                } else {
                    int secondBall = stoi(string(1, bowls[i + 1]) == 'X' ? 10 : string(1, bowls[i + 1]).digits();
                    if (secondBall == 10) {
                        score += firstBall + 10;
                    } else {
                        score += firstBall + secondBall;
                    }
                }
            } else {
                score += firstBall;
            }
        }
    }
    return score;
}