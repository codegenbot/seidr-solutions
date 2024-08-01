int bowlingScore(const string& input) {
    int score = 0;
    bool inFrame = false;
    queue<int> rolls;
    
    for (char c : input) {
        if (c == 'X') {
            score += 10 + (inFrame ? 10 : 0);
            inFrame = false;
        } else if (c == '/') {
            int currentRoll = 10 - rolls.front();
            score += rolls.front();
            rolls.pop();
            while (!rolls.empty() && rolls.front() != currentRoll) {
                score += rolls.front();
                rolls.pop();
            }
            inFrame = true;
        } else if (isdigit(c)) {
            int roll = c - '0';
            rolls.push(roll);
        }
    }
    
    return score;
}