int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    int i = 0;
    
    while (frame <= 10) {
        if (s[i] == 'X') {
            score += 10;
            if (s[i + 2] == 'X') {
                score += 10;
                if (s[i + 4] == 'X') {
                    score += 10;
                }
                else {
                    score += isdigit(s[i + 4]) ? s[i + 4] - '0' : 10;
                }
            }
            else {
                score += isdigit(s[i + 2]) ? s[i + 2] - '0' : 10;
                score += isdigit(s[i + 3]) ? s[i + 3] - '0' : 10;
            }
            frame++;
            i++;
        }
        else if (s[i + 1] == '/') {
            score += 10;
            score += isdigit(s[i + 2]) ? s[i + 2] - '0' : 10;
            frame++;
            i += 2;
        }
        else {
            score += isdigit(s[i]) ? s[i] - '0' : 0;
            score += isdigit(s[i + 1]) ? s[i + 1] - '0' : 0;
            if (s[i + 2] == '/') {
                score += 10 - (isdigit(s[i + 1]) ? s[i + 1] - '0' : 0);
            }
            frame++;
            i += 2;
        }
    }
    
    return score;
}