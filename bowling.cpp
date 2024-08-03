int bowlingScore(string s) {
    int score = 0;
    for(int i = 0; i < 10; i++) {
        if(s[i] == 'X') {
            score += 30;
            if(i < 9) {
                if(s[i+1] == '/' || s[i+2] == '/') {
                    score -= 10;
                }
            }
        } else if(s[i] == '/') {
            int next = i + 1, last = i + 3;
            while(next < last && (s[next] != 'X' && s[next] != '/')) next++;
            score += 10 - (next - i - 1);
        } else {
            score += s[i] - '0';
        }
    }
    return score;
}