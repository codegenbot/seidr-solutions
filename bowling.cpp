int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2;
    for (int i = 0; i < 10; i++) {
        if (s[i] == '/') {
            roll1 = s[i - 1] - '0';
            roll2 = 10 - roll1;
        } else {
            roll1 = s[i] - 'X';
            roll2 = 10;
        }
        score += getRollValue(roll1, roll2);
    }
    return score;
}

int getRollValue(int first, int second) {
    if (first == 0 && second == 10)
        return 10;
    else if (second == 0)
        return first + 10;
    else
        return first + second;
}