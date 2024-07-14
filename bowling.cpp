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
            int strike = 10 - (next - i);
            score += strike;
        } else {
            int count = 0;
            for (int j = i; j < s.length(); j++) {
                if (s[j] == 'X' || s[j] == '/') break;
                count++;
            }
            score += count + 1;
        }
    }
    return score;
}