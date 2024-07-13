int calculateScore(const string& bowls) {
    int score = 0;
    int frame = 0;
    int ball = 0;
    for (int i = 0; i < bowls.size() && frame < 10; ++i) {
        if (bowls[i] == 'X') {
            score += 10;
            if (frame < 9) {
                score += (bowls[i + 1] == 'X') ? 10 : (bowls[i + 1] - '0');
                score += (bowls[i + 2] == 'X') ? 10 : (bowls[i + 2] - '0');
            } else {
                score += (bowls[i + 1] == 'X' || bowls[i + 1] == '/') ? 10 : (bowls[i + 1] - '0');
                score += (bowls[i + 2] == 'X') ? 10 : (bowls[i + 2] - '0');
            }
            frame++;
        } else if (bowls[i] == '/') {
            score += 10 - (bowls[i - 1] - '0');
            score += (bowls[i + 1] == 'X') ? 10 : (bowls[i + 1] - '0');
            frame++;
            ball = 0;
        } else if (bowls[i] == '-') {
            ball++;
            if (ball == 2) {
                frame++;
                ball = 0;
            }
        } else {
            score += bowls[i] - '0';
            ball++;
            if (ball == 2) {
                frame++;
                ball = 0;
            }
        }
    }
    return score;
}

int main() {
    string bowls;
    cin >> bowls;
    cout << calculateScore(bowls);
    return 0;
}