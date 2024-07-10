int bowlingScore(string bowlers) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (bowlers[i] == 'X') {
            score += 30;
        } else if (isdigit(bowlers[i])) {
            int rolls = 0;
            for (int j = i; j < 3 + i && j < bowlers.length(); j++) {
                if (j - i > 0) {
                    score += rolls * (10 - i);
                    break;
                }
                rolls += bowlers[j] - '0';
            }
        } else {
            int rolls = bowlers[i] - '0' + bowlers[i+1] - '0';
            score += rolls;
        }
    }
    return score;
}