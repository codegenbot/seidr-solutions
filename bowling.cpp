int main() {
    string bowls;
    cin >> bowls;
    
    int score = 0;
    int frame = 1;
    int ball = 1;
    int prevBall = 0;
    int frameScore = 0;
    
    for (char c : bowls) {
        if (c == 'X') {
            score += 10;
            if (frame < 10) {
                if (prevBall == 1) {
                    score += 10;
                } else {
                    prevBall = 0;
                    frame++;
                }
            }
            ball = 1;
        } else if (c == '/') {
            score += 10 - frameScore;
            prevBall = 1;
            if (frame < 10) {
                frame++;
            }
            ball = 1;
        } else if (c == '-') {
            ball++;
        } else {
            score += c - '0';
            if (ball == 1) {
                frameScore = c - '0';
                ball++;
            } else {
                frameScore += c - '0';
                score += frameScore;
                if (frame < 10) {
                    frame++;
                }
                ball = 1;
            }
        }
    }
    
    cout << score << endl;
    
    return 0;
}