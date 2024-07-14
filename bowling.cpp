int bowlingScore(string s) {
    int score = 0;
    bool isStrike = false;
    int strikeCount = 0;
    
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            strikeCount++;
            isStrike = true;
        } else if (c == '/') {
            isStrike = false;
        } else if (isdigit(c)) {
            int frameScore = stoi(string(1, c));
            if (!isStrike) {
                score += frameScore;
            } else {
                score += 10 + frameScore;
                strikeCount--;
                if (strikeCount > 0) {
                    score += 10;
                }
            }
        }
    }
    
    return score;
}