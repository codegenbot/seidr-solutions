int bowlingScore(string str) {
    int score = 0;
    int roll1, roll2;

    for (int frame = 1; frame <= 10; ++frame) {
        if (str[3*frame-3] == 'X') {
            score += 10;
        } else if (isdigit(str[3*frame-3])) {
            roll1 = str[3*frame-2] - '0';
            if (str[3*frame-1] == '/') {
                roll2 = 10 - roll1;
                score += roll1 + roll2;
            } else {
                int rolls[] = {roll1, str[3*frame-1] - '0'};
                std::sort(rolls, rolls+2);
                score += (rolls[0]+rolls[1]);
            }
        } else {
            score += 10;
        }
    }

    return score;
}