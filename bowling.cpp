int bowlingScore(string s) {
    int score = 0;
    for(int i=0; i<10; i++) {
        if(s[i] == 'X') {
            score += 30;
            if(i < 9)
                score += bowlingRoll(s.substr(i+1,3));
        } else if(s[i] == '/') {
            int first = s[i-1] - '0';
            int second = s[i+1] - '0';
            score += first + second;
        } else {
            int count = 0;
            for(int j=i; j<10 && (s[j] >= '0' && s[j] <= '9'); j++) {
                count = count * 10 + (s[j] - '0');
            }
            score += count;
        }
    }
    return score;
}

int bowlingRoll(string s) {
    int first = s[0] - '0';
    int second = s[1] - '0';
    int third = s[2] - '0';
    if(s[0] == 'X') return 30;
    if(s[0] == '/') return first + second;
    return first + second + third;
}