int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            int next = i + 1;
            while (next < s.length() && s[next] != '/') {
                next++;
            }
            int thisFrame = 10 - (next - i);
            score += thisFrame * 10;
            i = next - 1;
        } else if (isdigit(s[i])) {
            int thisFrame = 0;
            for (int j = i; j < s.length() && isdigit(s[j]); j++) {
                thisFrame = thisFrame * 10 + (s[j] - '0');
            }
            score += thisFrame;
            i = j - 1;
        }
    }
    return score;
}