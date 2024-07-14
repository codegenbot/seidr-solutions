int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            string firstRoll = s.substr(0, i);
            string secondRoll = s.substr(i + 1);
            if (firstRoll[0] == 'X') {
                score += 10;
                currentFrame++;
            } else if (stoi(firstRoll) >= 10) {
                int spare = 10 - stoi(firstRoll);
                score += 10;
                if (secondRoll[0] == '/') {
                    score += spare + 1;
                } else {
                    score += spare + stoi(secondRoll[0]);
                }
                currentFrame++;
            } else {
                score += stoi(firstRoll);
                if (stoi(firstRoll) < 10) {
                    if (secondRoll[0] == '/') {
                        score += 10 - stoi(firstRoll);
                    } else {
                        score += stoi(secondRoll[0]) + stoi(firstRoll);
                    }
                    currentFrame++;
                }
            }
        } else {
            if (currentFrame <= 9) {
                score += stoi(string(1, s[i]));
            }
        }
    }
    return score;
}