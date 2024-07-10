int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            int next = i + 1;
            while (next < 10 && s[next] != 'X' && s[next] != '/') {
                next++;
            }
            int strike = 10 - (next - i);
            score += strike * 10;
        } else if (isdigit(s[i])) {
            int count = 0;
            while (i < 10 && isdigit(s[i])) {
                count++;
                i++;
            }
            i--; // back to the previous position
            score += count;
        }
    }
    return score;
}