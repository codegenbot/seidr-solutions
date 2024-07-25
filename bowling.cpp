int bowlingScore(string bowline) {
    int score = 0;
    int roll1, roll2;
    for (int i = 0; i < 10; ++i) {
        if (isdigit(bowline[2*i])) {
            roll1 = roll2 = stoi(bowline.substr(2*i, 2));
            score += roll1 + roll2;
        } else {
            roll1 = stoi(bowline.substr(2*i, 1));
            if (bowine[2*i+1] == '/') {
                score += 10;
            } else {
                score += roll1 + 10;
            }
        }
    }
    return score;
}