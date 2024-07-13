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
            int thisFrame = 10 - s.substr(i, next - i).find('/');
            score += thisFrame * 10;
            i = next - 1;
        } else {
            int count = 0;
            while (i < s.length() && s[i] != '/') {
                if (s[i] == 'X') {
                    score += 30;
                    break;
                }
                count++;
                i++;
            }
            if (count > 0) {
                score += count * 10;
            } else {
                score += 10;
            }
        }
    }
    return score;
}