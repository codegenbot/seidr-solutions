int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    for(int i=0; i<s.length(); i++) {
        if(s[i] == '/') {
            if(currentRoll < 2) {
                score += 10 - (10 - stoi(s.substr(i-1, i-1))) % 10;
            }
            else {
                score += currentRoll + min(10-stoi(s.substr(i-1, i-1))%10,stoi(s.substr(i-1, i-1)))/10 * 10;
            }
            currentRoll = 0;
        }
        else if(isdigit(s[i])) {
            currentRoll++;
        }
    }
    return score;
}