int bowling(string str) {
    int score = 0;
    int currentTurn = 0;
    vector<int> frames;

    for (char c : str) {
        if (c == '/') {
            currentTurn++;
            if (currentTurn < 10) {
                frames.push_back(currentTurn);
            }
        } else if (c == 'X') {
            score += 30;
            currentTurn++;
            if (currentTurn < 10) {
                frames.push_back(10);
            }
        } else {
            int points = c - '0';
            score += points;
            currentTurn++;
            if (currentTurn < 10) {
                if (c == '5') {
                    currentTurn++;
                } else {
                    frames.push_back(points);
                }
            }
        }
    }

    for (int i = 0; i < frames.size(); i++) {
        int strikeBonus = 20;
        int spareBonus = 10 - frames[i];
        if (i < frames.size() - 1) {
            if (frames[i] == 10) {
                score += strikeBonus + frames[i+1];
            } else {
                score += spareBonus + frames[i+1];
            }
        }
    }

    return score;
}