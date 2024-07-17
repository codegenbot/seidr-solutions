int bowlingScore(string s) {
    int score = 0;
    for(int i = 0; i < 10; i++) {
        if(s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            continue;
        } else {
            int j = i + 1;
            while(j < 11 && s[j] != '/' && s[j] != 'X') {
                j++;
            }
            int strikeOrSpare = stoi(s.substr(i, j - i));
            score += strikeOrSpare;
            if(strikeOrSpare == 10) {
                i = j;
            } else {
                i = j + 1;
            }
        }
    }
    return score;
}