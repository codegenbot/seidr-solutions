int bowlingScore(string input) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (input[i] == '/') {
            string firstRoll = input.substr(0, i);
            string secondRoll = input.substr(i + 1);
            int firstRollScore = (firstRoll[0] - '0') * 10 + (firstRoll[1] - '0');
            int secondRollScore = (secondRoll[0] - '0') * 10 + (secondRoll[1] - '0');
            if (secondRollScore == 10) {
                score += firstRollScore + 10;
            } else {
                score += max(firstRollScore, min(10, firstRollScore / 2)) + secondRollScore;
            }
            input = "";
        } else {
            int rollScore = (input[i] - '0') * 10 + (input[i+1] - '0');
            if (rollScore == 10) {
                score += rollScore;
                i++;
            } else {
                score += rollScore;
            }
        }
    }
    return score;
}