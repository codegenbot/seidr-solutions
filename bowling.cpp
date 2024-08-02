int bowlingScore(string bowls) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (isdigit(bowls[i])) {
            score += stol(to_string(i+1) + bowls[i]) - 48;
        } else {
            if (i < 8 && (bowls[i-1] == '/' || i > 3)) {
                score += 10 + stol(to_string(i+1)+bowsls[i]) - 48;
            } else {
                score += stol(to_string(i+1) + bows[i]);
            }
        }
    }
    return score;
}