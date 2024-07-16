int bowlingScore(const string& bowls) {
    int totalScore = 0;
    int bowlIndex = 0;

    for (int frame = 0; frame < 10; ++frame) {
        if (bowls[bowlIndex] == 'X') {
            totalScore += 10;
            totalScore += (bowls[bowlIndex + 2] == 'X') ? 10 : (bowls[bowlIndex + 2] == '/') ? 10 - (bowls[bowlIndex + 1] - '0') : bowls[bowlIndex + 1] - '0' + bowls[bowlIndex + 2] - '0';
            bowlIndex++;
        } else if (bowls[bowlIndex + 1] == '/') {
            totalScore += 10;
            totalScore += (bowls[bowlIndex + 2] == 'X') ? 10 : bowls[bowlIndex + 2] - '0';
            bowlIndex += 2;
        } else {
            totalScore += bowls[bowlIndex] - '0' + bowls[bowlIndex + 1] - '0';
            bowlIndex += 2;
        }
    }

    return totalScore;
}