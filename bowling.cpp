int bowlingScore(string str) {
    int score = 0;
    int roll = 0;
    string frame;
    
    for (char c : str) {
        if (c == '/') {
            int pins = stoi(frame);
            if (roll < 2) {
                score += min(10, pins);
            } else {
                score += pins + min(10, roll - 1) * 10;
            }
            frame.clear();
            roll = 0;
        } else if (c == 'X') {
            int pins = 30;
            if (roll < 2) {
                score += 10;
            } else {
                score += 20 + min(10, roll - 1) * 10;
            }
            frame.clear();
            roll = 0;
        } else {
            frame.push_back(c);
            roll++;
        }
    }
    
    int pins = stoi(frame);
    if (roll < 2) {
        score += min(10, pins);
    } else {
        score += pins + min(10, roll - 1) * 10;
    }
    
    return score;
}