int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; ++i) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            int next = i + 1;
            while (next < s.length() && s[next] != '/') {
                ++next;
            }
            int strikeCount = 0;
            for (; i < next; ++i) {
                if (s[i] == 'X') {
                    score += 30;
                    strikeCount++;
                } else {
                    score += s[i] - '0';
                }
            }
            if (strikeCount > 1) {
                score += strikeCount * 10;
            }
        } else {
            int framescore = s[i] - '0' + (s[i+1] == 'X' ? 10 : s[i+1] - '0');
            score += framescore;
            i++;
        }
    }
    return score;
}