int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == '/') {
            string part1 = s.substr(0, i);
            string part2 = s.substr(i + 1);
            int firstPartScore = 0;
            if (part1[0] != 'X') {
                firstPartScore += (part1[0] - '0');
                if (part1.length() > 1) {
                    firstPartScore += (part1[1] - '0');
                }
            } else {
                firstPartScore = 10;
            }
            int secondPartScore = 0;
            if (part2[0] != 'X') {
                secondPartScore += (part2[0] - '0');
                if (part2.length() > 1) {
                    secondPartScore += (part2[1] - '0');
                }
            } else {
                secondPartScore = 10;
            }
            int frameScore = firstPartScore + secondPartScore;
            if (frameScore < 10) {
                score += frameScore;
            } else {
                score += 10 + getBonus(part2);
            }
        } else {
            int frameScore = 0;
            for (int j = 0; j <= i; j++) {
                frameScore *= 10;
                frameScore += (s[j] - '0');
            }
            if (frameScore == 10) {
                score += 10 + getBonus(s.substr(i + 1));
            } else {
                score += frameScore;
            }
        }
    }
    return score;
}

int getBonus(string s) {
    int bonus = 0;
    for (char c : s) {
        if (c == 'X') {
            bonus = 10;
            break;
        } else if (c >= '1' && c <= '9') {
            bonus += (c - '0');
        }
    }
    return bonus;
}