int bowlingScore(string s) {
    int score = 0;
    int rolls = 0;

    for (int i = 0; i < 10; i++) {
        if (s[i] == '/') {
            // Split the string into two parts, convert them to integers and sum them up
            int firstRoll = stoi(string(1, s[i - 1])) * 10 + stoi(string(1, s[i + 1]));
            score += max(firstRoll / 10, 10);
        } else {
            // Calculate the score for a strike or spare
            if (s[i] == 'X') {
                score += 10 + bowlingScore(s.substr(i + 1)) - rolls;
            } else if (stoi(string(1, s[i])) + stoi(string(1, s[i + 1])) < 11) {
                score += 10;
                rolls++;
            }
        }
    }

    return score;
}