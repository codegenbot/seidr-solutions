int calculateBowlingScore(string bowls) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    for (int i = 0; i < bowls.size(); ++i) {
        if (bowls[i] == 'X') {
            score += 10;
            if (frame < 10) {
                score += (bowls[i + 1] == 'X' ? 10 : (bowls[i + 1] == '/' ? 10 - (bowls[i - 1] - '0') : bowls[i + 1] - '0') +
                                                           (bowls[i + 2] == 'X' ? 10 : (bowls[i + 2] == '/' ? 10 - (bowls[i + 1] - '0') : bowls[i + 2] - '0')));
            }
            ball = 0;
            frame++;
        } else if (bowls[i] == '/') {
            score += 10 - (bowls[i - 1] - '0');
            if (frame < 10) {
                score += (bowls[i + 1] == 'X' ? 10 : bowls[i + 1] - '0');
            }
            ball = 0;
            frame++;
        } else {
            score += bowls[i] - '0';
            if (ball == 0) {
                ball = 1;
            } else {
                ball = 0;
                frame++;
            }
        }
    }
    return score;
}

int main() {
    string bowls;
    cin >> bowls;
    cout << calculateBowlingScore(bowls) << endl;
    return 0;
}