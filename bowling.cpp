int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 10 + (frame < 9 ? 10 : 0);
            frame++;
        } else if (s[i] == '/') {
            int prev = s[i-1] - '0';
            int curr = s[i+1] - '0';
            score += prev + curr;
            i++; // skip the '/'
            frame++;
        } else {
            int count = 0;
            while (i < s.length() && s[i] >= '0' && s[i] <= '9') {
                count = count * 10 + s[i] - '0';
                i++;
            }
            score += count;
            if (count == 10) frame++;
            else frame++;
        }
    }
    return score;
}