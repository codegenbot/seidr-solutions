int bowlingScore(string bowls) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (isdigit(bowls[i])) { // Strike
            score += 10 + getBonusScore(&bowls[i+1]);
        } else if (bowls[i] == '/') { // Spare
            int bonus = getBonusScore(&bowls[i+2]);
            score += 10 + bonus;
        } else {
            int first = bowls[i] - '0';
            int second = bowls[i+1] - '0';
            score += first + second;
        }
    }
    return score;
}

int getBonusScore(string* bow) {
    int sum = 0;
    for (int i = 0; i < 2; i++) {
        if (*bow == 'X') { // Strike
            sum += 10;
            bow++;
            continue;
        } else if (*bow == '/') { // Spare
            sum += 5;
            bow++;
            break;
        }
        sum += *bow - '0';
        bow++;
    }
    return sum;
}