int bowlingScore(string s) {
    int score = 0;
    for(int i=0; i<10; i++) {
        if(s[i] == '/') {
            score += 10;
        } else {
            int count = 0;
            while(i < 18 && s[i] != '/') {
                if(s[i] == 'X') {
                    score += 30;
                    i++;
                    break;
                }
                count += (s[i++] - '0');
            }
            if(count > 10) {
                score += 10 + count - 10;
            } else {
                score += count;
            }
        }
    }
    return score;
}