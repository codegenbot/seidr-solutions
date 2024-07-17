int bowlingScore(std::vector<char>& s) {
    int score = 0;
    for (int i = 0; i < s.size(); ) {
        if (s[i] == '/') {
            if (i > 0 && (s[i - 1] == 'X' || s[i - 1] >= '2' && s[i - 1] <= '9')) {
                score += 10;
                i++;
            } else if (s.size() > i + 1 && s[i + 1] == '/') {
                score += s[i - 1] - '0';
                i += 2;
            } else {
                return -1; // invalid input
            }
        } else if (s[i] >= 'X') { 
            score += 10;
        } else {
            score += s[i] - '0';
        }
    }
    return score;