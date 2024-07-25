int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2;

    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') { // strike
            score += 10 + 30;
            continue;
        }

        if (s[i] == '/') { // spare
            score += 10 + s[i+1] - '0';
            i++;
            continue;
        }

        roll1 = s[i] - '0';
        roll2 = s[i+1] - '0';

        if (roll1 + roll2 == 10) { // spare
            score += 10;
            i++;
        } else {
            score += roll1 + roll2;
        }
    }

    return score;
}