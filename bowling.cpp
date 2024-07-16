int bowlingScore(string s) {
    int score = 0;
    int roll = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '/') {
            if (roll > 9)
                score += 10;
            else if (roll > 0) 
                score += roll;
            roll = 0;
        } else if (isdigit(s[i])) {
            roll *= 10;
            roll += s[i] - '0';
        }
    }

    // Add any remaining rolls
    while (roll > 9 || (i + 1 < s.size() && s[i + 1] == '/')) {
        if (roll > 9) 
            score += 10;
        else
            score += roll;
        i++; // Move to the next frame
        roll = 0;
    }

    // Add any remaining single rolls
    while (i < s.size() && isdigit(s[i])) {
        roll *= 10;
        roll += s[i] - '0';
        if (roll > 9) 
            score += 10;
        else
            score += roll;
        i++; // Move to the next frame
    }

    return score;
}