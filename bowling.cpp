int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            score += min(stoi(s.substr(i-1,1)),10);
            currentFrame++;
        } else if (currentFrame > 9) {
            if (s[i] == 'X') {
                score += 10;
            } else {
                int balls = s.length() - i;
                score += stoi(s.substr(i,balls)) + 10;
            }
        } else {
            if (i < s.length()-1 && s[i+1] == '/') continue;
            score += stoi(string(1,s[i]));
        }
    }
    return score;
}