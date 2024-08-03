int bowlingScore(string input) {
    int score = 0;
    bool bonusTurn = false;
    
    for (int i = 0; i < 10; ++i) {
        if (input[i] == 'X' || (input[i] >= '1' && input[i] <= '9')) {
            int currentTurn = stoi(input.substr(i, 2));
            if (currentTurn == 10) {
                score += 10 + ((input.substr(0, i)).find('/') != string::npos ? 10 : 0);
                bonusTurn = true;
            } else if (bonusTurn) {
                bonusTurn = false;
            }
            score += currentTurn;
        } else {
            int currentTurn = input[i] - '0';
            if (currentTurn + (input[++i] - '0') == 10) {
                score += 10;
                bonusTurn = true;
            } else {
                score += currentTurn;
            }
        }
    }
    
    return score;
}