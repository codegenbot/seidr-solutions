int bowlingScore(const std::string& s) {
    int score = 0;
    for (int i = 0; i < 10; ++i) {
        if (s[i] == 'X') {
            score += 30;
        } else if (isdigit(s[i])) {
            int roll1 = s[i] - '0';
            if (s[i+1] == '/') {
                if(i < 9 && s[i+2] == '/') {
                    score += 10 + roll1;
                    i++; // Move to the next frame
                } else {
                    if(i < 8) {
                        int roll2 = s[i+2] - '0';
                        score += roll1 + roll2;
                    } else {
                        score += roll1 * 2;
                    }
                }
            } else if (i < 9) {
                int roll2 = s[++i] - '0';
                score += roll1 * 2 + roll2;
            } else {
                score += roll1 * 2;
            }
        } else {
            int roll1 = s[i] - '0';
            int roll2 = s[i+1] - '0';
            if(i < 9) {
                i++; // Move to the next frame
            }
            score += roll1 + roll2;
        }
    }
    return score;
}

int main() {
    return bowlingScore("XXX/73/21/23/54//12/X16/8/24/X");
}