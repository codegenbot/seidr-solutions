int bowlingScore(string s) {
    int score = 0;
    bool lastRoll = false;
    
    for (int frame = 1; frame <= 10; frame++) {
        if (s.length() >= 2 && s.substr(0, 2) == "X ") {
            score += 10;
            s.erase(0, 2);
            lastRoll = true;
        } else if (s[0] == '/') {
            int strikePoints = 10 - (s[1] - '0');
            score += 10 + strikePoints;
            s.erase(0, 3);
            lastRoll = false;
        } else if (s[0] != 'X') {
            int points = (s[0] - '0') + (s[1] - '0');
            score += points;
            s.erase(0, 2);
            lastRoll = false;
        }
        
        if (!lastRoll && s.length() > 0) {
            if (s[0] == 'X') {
                score += 10;
                s.erase(0, 1);
                lastRoll = true;
            } else if (s[0] != '/') {
                int points = (s[0] - '0');
                score += points;
                s.erase(0, 1);
                lastRoll = false;
            }
        }
    }
    
    return score;
}