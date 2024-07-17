int bowlingScore(string s) {
    int score = 0;
    bool firstRoll = true;
    
    for (char c : s) {
        if (c == '/') {
            firstRoll = false;
            continue;
        }
        
        int rolls = stoi(c == 'X' ? "10" : c == '-' ? "0" : c);
        if (!firstRoll)
            score += firstRoll ? 10 : min(rolls, 10) + (rolls - 1 > 0 ? 10 : 0);
        else
            score += rolls;
        
        firstRoll = false;
    }
    
    return score;
}