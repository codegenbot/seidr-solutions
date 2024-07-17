int bowlingScore(vector<int>& s) {
    int score = 0;
    for (int i = 0; i < s.size(); ) {
        if (s[i] == '/') {
            score += (10 - (s[i+1] + s[i+2]) % 10);
            i += 3;
        } else if (s[i] >= 1 && s[i] <= 9) {
            score += s[i];
            i++;
        } else if (s[i] == 10) {
            score += 10;
            i++;
        }
    }
    return score;