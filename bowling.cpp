int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    vector<int> rolls(10);
    
    for (char c : s) {
        if (c == '/') {
            if (roll > 0) {
                if (roll < 2) {
                    score += 10 - rolls[0];
                } else {
                    score += sumOfRolls(rolls, 1, roll);
                }
                roll = 0;
            }
        } else if (c == 'X') {
            score += 30;
            roll = 0;
        } else {
            int val = c - '0';
            rolls[roll++] = val;
        }
    }
    
    if (roll > 0) {
        if (roll < 2) {
            score += 10 - rolls[0];
        } else {
            score += sumOfRolls(rolls, 1, roll);
        }
    }
    
    return score;
}

int sumOfRolls(vector<int> rolls, int start, int end) {
    int sum = 0;
    for (int i = start; i < end; i++) {
        sum += rolls[i];
    }
    return sum * 2 + rolls[end - 1];
}