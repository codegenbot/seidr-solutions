int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == '/') {
            string firstPart = s.substr(0, i);
            string secondPart = s.substr(i + 1);
            int strike = count(firstPart.begin(), firstPart.end(), 'X') - 1;
            int spare = 10 - strike;
            score += strike * 10 + spare;
        } else {
            if (s[i] == 'X') {
                score += 30;
            } else if (s[i] == '/') {
                string part = s.substr(i);
                int firstRoll = part[0] - '0';
                int secondRoll = part[1] - '0';
                score += 10 + firstRoll + secondRoll;
            } else {
                score += s[i] - '0' * 2;
            }
        }
    }
    return score;
}