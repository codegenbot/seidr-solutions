int bowlingScore(const std::string& s) {
    int score = 0;
    int i = 0; 
    for (; i < 10; ++i) {
        if (s[i] == 'X') {
            score += 30;
        } else {
            int roll1 = s[i] - '0';
            if (i < 8 && s[i + 1] == '/') {
                int roll2 = s[i + 2] - '0';
                score += i == 0 ? roll1 + roll2 : (roll1 + roll2);
            } else if (i < 9) {
                int roll2 = s[++i] - '0';
                score += roll1 * 2 + (i == 0 ? roll2 : roll2);
            } else {
                score += roll1 * 2;
            }
        }
    }
    return score;
}

int main() {
    return bowlingScore("X|9-/8-7-X|-3|5/X|-10|-8-4-6|5/5|-1-3-7-X");
}