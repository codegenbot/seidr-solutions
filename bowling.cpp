int bowlingScore(std::string s) {
    int score = 0;
    int getBonus, roll1, roll2; // declare here

    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') { 
            score += 10 + getBonus(s, i);
        } else if (s[i] == '/') { 
            score += 5 + getBonus(s.substr(i+1), 0);
        } else { 
            roll1 = s[i] - '0';
            if (i < 8 && s[i+1] != '/') {
                roll2 = s[i+1] - '0';
                score += roll1 + roll2;
            } else {
                score += roll1;
            }
        }
    }

    return score;
}

int getBonus(std::string s, int i) {
    // your code here
}