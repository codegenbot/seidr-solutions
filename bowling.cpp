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
            int strikeCount = (next - i) / 2;
            score += strikeCount * 10 + 10;
        } else {
            int count = 0;
            while (i < s.length() && s[i] != '/'){
                if(s[i] == 'X')count++;
                else count++;
                i++;
            }
            score += count * 1;
        }
    }
    return score;
}