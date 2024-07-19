int bowlingScore(string s) {
    int score = 0;
    for (char c : s) {
        if (c >= 'X' && c <= '9') {
            score += c - '0';
        } else if (c == '/') {
            score += 10 - (10 - (score / 10));
        }
        else if (c == 'X'){
            score += 10;
        }
        else if (c >= '1' && c <= '9') {
            int temp = c - '0';
            while (s[s.find(c) + 1] != '/') {
                c = s[s.find(c) + 1];
                if (c >= 'X' && c <= '9') {
                    score += c - '0';
                } else if (c == '/') {
                    score += temp;
                    break;
                }
                else if (c == 'X'){
                    score += 10;
                    break;
                }
            }
        }
    }
    return score;
}