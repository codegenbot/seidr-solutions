int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'X') {
            score += 10 + (frame < 10 ? 10 : 0);
            frame++;
        } else if (s[i] == '/') {
            int count = 0;
            while (i + 1 < s.size() && s[i+1] != '/'){
                count++;
                i++;
            }
            score += 10 - count;
            frame++;
        } else {
            int count = 0;
            while (i + 1 < s.size() && s[i+1] >= '0' && s[i+1] <= '9') {
                count = count * 10 + (s[i] - '0');
                i++;
            }
            score += count;
            frame++;
        }
    }
    return score;
}