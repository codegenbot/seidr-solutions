int getScore(const string& bowls) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    int first;
    int second;
    for (char c : bowls) {
        if (c == 'X') {
            score += 10;
            if (frame < 10) {
                if (frame != 9 && bowls[ball + 2] == 'X') {
                    score += 10;
                }
                if (bowls[ball + 1] == 'X') {
                    score += 10;
                } else {
                    score += bowls[ball + 1] - '0';
                }
            }
            ball++;
            frame++;
        } else if (c == '/') {
            score += 10 - first + 5;
            frame++;
        } else if (c == '-') {
            frame++;
        } else {
            if (ball % 2 == 0) {
                first = c - '0';
            } else {
                second = c - '0';
                if (first + second == 10) {
                    score += 10;
                } else {
                    score += first + second;
                }
            }
        }
        ball++;
    }
    return score;
}

int main() {
    string bowls;
    cin >> bowls;
    cout << getScore(bowls) << endl;
    return 0;
}