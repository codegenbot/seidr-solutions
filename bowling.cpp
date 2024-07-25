int bowlingScore(string s) {
    int score = 0;
    vector<int> rolls(21);
    for (int i = 0; i < s.size(); i++) {
        if (isdigit(s[i])) {
            int j = i + 1;
            while (j <= s.size() && isdigit(s[j])) j++;
            rolls[i] = stoi(s.substr(i, j - i));
            i = j - 1;
        }
    }
    
    for (int i = 0; i < 10; i++) {
        if (s[2 * i] == 'X') {
            score += 10 + rolls[10 + i];
        } else if (rolls[2 * i] + rolls[2 * i + 1] == 10) {
            score += 10;
        } else {
            score += rolls[2 * i] + rolls[2 * i + 1];
        }
    }
    
    return score;
}