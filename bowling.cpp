```c++
int bowlingScore(const std::string& s) {
    int score = 0;
    for (int i = 0; i < 10; ++i) {
        if (s[i] == 'X') {
            score += 30;
        } else if (isdigit(s[i])) {
            int roll1 = s[i] - '0';
            if (i < 9 && s[i + 1] == '/') {
                int roll2 = s[i + 2] - '0';
                score += roll1 + roll2;
            } else if (i < 10) {
                int roll2 = s[i + 1] - '0';
                if (i < 9) {
                    score += roll1 * 2 + roll2;
                } else {
                    score += roll1 * 2;
                }
            } else {
                score += roll1;
            }
        } else {
            int roll1 = s[i] - '0';
            int roll2 = s[i + 1] - '0';
            if (i < 9) {
                score += roll1 + roll2;
            } else {
                score += roll1;
            }
        }
    }
    return score;
}

int main() {
    return bowlingScore("XXX/73/21/23/54//12/X16/8/24/X");
}