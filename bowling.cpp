int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == '/') {
            if (roll < 2) {
                if (roll == 1) {
                    score += 10 - (10 - (stoi(s.substr(0, s.find('/')))) + (stoi(s.substr(s.find('/')+1, s.find('/', s.find('/')+1)-s.find('/')-1)))) / 2;
                } else {
                    score += stoi(s.substr(0, s.find('/')));
                }
            }
            roll = 0;
        } else if (c == 'X') {
            score += 10;
            roll++;
        } else if (isdigit(c)) {
            int temp = c - '0';
            if (roll < 2) {
                score += temp;
                roll++;
            } else {
                score += temp;
            }
        }
    }
    return score;
}