int bowlingScore(string bowls) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (isdigit(bowls[i])) { // Strike or spare roll
            int frameScore = 0;
            if (isupper(bowls[i])) { // Strike
                frameScore = 10;
            } else if (i < 9 && to_string(stoi(bowls.substr(i, 1)) + stoi(bowls.substr(i + 2, 1))) == bowls.substr(i, 2)) {
                frameScore = 10; // Spare
            } else { // Normal roll(s)
                int rolls = stoi(bowls.substr(i, 1));
                if (i < 9) {
                    rolls += stoi(bowls.substr(i + 2, 1));
                }
                frameScore = rolls;
            }
        } else { // Normal roll
            int rolls = 0;
            for (; i < 10; i++) {
                if (!isdigit(bowls[i])) break;
                rolls++;
            }
            score += rolls;
        }
        score += frameScore;
    }
    return score;
}