int bowlingScore(string str) {
    int score = 0;
    int frame = 1;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '/') {
            if (str[i-1] != 'X') {
                score += 10 - (str[i-1] - '0');
            }
            frame++;
        } else if (i < str.length() - 1 && str[i+1] == '/') {
            int num = str[i] - '0';
            score += num + 10;
            frame++;
        } else {
            score += str[i] - '0' + (str[i+1] - '0');
            if (frame < 10) {
                frame++;
            }
        }
    }
    return score;
}