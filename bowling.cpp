int calculateScore(const std::string& bowls) {
    int score = 0;
    int frame = 1;
    int bowlIndex = 0;

    while (frame <= 10 && bowlIndex <= bowls.length() - 1) {
        char bowl = bowls[bowlIndex];

        if (bowl == 'X') {
            if (bowls[bowlIndex + 1] == 'X') {
                if (bowls[bowlIndex + 2] == 'X') {
                    score += 30;
                } else {
                    score += 20 + (bowls[bowlIndex + 2] - '0');
                }
            } else {
                if (bowls[bowlIndex + 2] == '/') {
                    score += 20;
                } else {
                    score += 10 + (bowls[bowlIndex + 1] - '0') + (bowls[bowlIndex + 2] - '0' - '0');
                }
            }
            bowlIndex += 1;
        } else if (bowl == '/') {
            score += (10 - (bowls[bowlIndex - 1] - '0')) + (bowls[bowlIndex + 1] - '0');
        } else {
            score += (bowl - '0');
        }

        frame++;
        bowlIndex++;
    }

    return score;
}