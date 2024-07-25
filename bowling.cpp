int getBowlingScore(string bowls) {
    int score = 0;
    int frame = 1;
    int ball = 0;

    for (int i = 0; i < bowls.size(); ++i) {
        char c = bowls[i];
        if (c == 'X') {
            score += 10;
            if (frame < 10) {
                if (bowls[i + 2] == '/')
                    score += 10;
                else {
                    score += (bowls[i + 1] == 'X') ? 10 : (bowls[i + 1] - '0');
                    score += (bowls[i + 2] == 'X') ? 10 : (bowls[i + 2] - '0');
                }
            }
            if (++frame == 10)
                break;
        } else if (c == '/') {
            score += 10 - (bowls[i - 1] - '0');
            if (frame == 10)
                score += (bowls[i + 1] == 'X') ? 10 : (bowls[i + 1] - '0');
        } else {
            score += (c == '-') ? 0 : (c - '0');
            if (++ball % 2 == 0) {
                if (frame < 10 && bowls[i - 1] != '/') {
                    if (bowls[i - 1] == 'X')
                        score += (c == 'X') ? 10 : (c - '0');
                    if (frame == 10 && i + 1 == bowls.size() && c == 'X')
                        score += 10;
                }
                ++frame;
            }
        }
    }

    return score;
}

int main() {
    string bowls;
    cin >> bowls;
    int score = getBowlingScore(bowls);
    cout << score << endl;
    return 0;
}