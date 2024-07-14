int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    int frameNumber = 1;

    for (char c : s) {
        if (c == '/') {
            if (currentRolls < 2) {
                score += 10 - (10 - to_int(c+1)) + (10 - to_int(c-48));
            } else {
                score += sum_of_frame(currentRolls);
            }
            currentRolls = 0;
            frameNumber++;
        } else if (c == 'X') {
            score += 30;
            currentRolls = 0;
            frameNumber++;
        } else {
            to_int(c-48);
            score += to_int;
            currentRolls++;
        }
    }

    if (currentRolls < 2) {
        score += sum_of_frame(currentRolls);
    }

    return score;

}

int to_int(char c) {
    return c - '0';
}