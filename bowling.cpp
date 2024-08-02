int bowlingScore(string s) {
    int score = 0;
    vector<int> rolls(21); // stores the number of pins knocked down per roll
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            int strikeOrSpare = 10 - stoi(s.substr(i-1, 1)); 
            score += 10 + strikesAndSpares(rolls, i);
            rolls[i] = 10;
        } else if (s[i] == 'X') {
            score += 10;
            rolls[i] = 10;
        } else {
            int roll = stoi(s.substr(i, 1));
            score += roll;
            rolls[i] = roll;
        }
    }

    return score;
}

int strikesAndSpares(vector<int> rolls, int i) {
    int bonus = 0;
    
    for (int j = i+1; j <= i + 1 && j < 11; j++) {
        if (rolls[j] == 10) {
            bonus += 20 - rolls[i];
            break;
        } else {
            bonus += rolls[i];
        }
    }

    return bonus;
}