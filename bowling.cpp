int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X' || (i+2 <= s.length() && to_string(s.substr(i,3)) == "XXX")) {
            if (currentFrame != 10) score += 10 + bonusForPreviousFrames(s.substr(0, i));
            currentFrame++;
        } else if (s[i] == '/') {
            int strikeCount = countStrike(s.substr(0, i));
            score += strikeCount * 10;
            currentFrame++;
        } else {
            int pinsInCurrentFrame = convertToPins(s.substr(i,2));
            if (currentFrame != 10) score += pinsInCurrentFrame + bonusForPreviousFrames(s.substr(0, i+1));
            currentFrame++;
            if (currentFrame == 10 && s[i+1] == 'X') {
                score += strikeCount * 10;
            }
        }
    }
    return score;

}

int convertToPins(string s) {
    int pins = stol(s);
    return pins;
}

int countStrike(string s) {
    int strikes = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') strikes++;
    }
    return strikes;
}

int bonusForPreviousFrames(string s) {
    int bonus = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            int strikeCount = countStrike(s.substr(0, i));
            bonus += strikeCount * 10;
        }
    }
    return bonus;
}