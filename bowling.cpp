int bowlingScore(string s) {
    int score = 0;
    for(int i = 0; i < 10; i++) {
        if(s[i] == '/') {
            string firstRoll = s.substr(0, i);
            string secondRoll = s.substr(i + 1);
            int firstRollValue = stoi(firstRoll);
            int secondRollValue = stoi(secondRoll);
            
            if(firstRollValue + secondRollValue >= 10) {
                score += 10;
            } else {
                score += firstRollValue + secondRollValue;
            }
        } else {
            int rollValue = s[i] - '0';
            score += rollValue;
        }
    }
    return score;
}