int calculateBowlingScore(string bowls) {
    int score = 0;
    int frame = 0;
    for (int i = 0; i < bowls.size() && frame < 10; ++i) {
        if (bowls[i] == 'X') {
            score += 10;
            if (i + 2 < bowls.size()) {
                if (bowls[i + 2] == 'X') {
                    score += 10;
                } else if (bowls[i + 2] == '/') {
                    score += 10 - (bowls[i + 1] - '0');
                } else {
                    score += bowls[i + 1] - '0' + bowls[i + 2] - '0';
                }
            }
            frame++;
        } else if (bowls[i] == '/') {
            score += 10 - (bowls[i - 1] - '0');
            if (i + 1 < bowls.size()) {
                score += bowls[i + 1] - '0';
            }
            frame++;
        } else if (bowls[i] == '-') {
            // do nothing for a miss
        } else {
            score += bowls[i] - '0';
            if (i + 1 < bowls.size() && bowls[i + 1] == '/') {
                score += 10 - (bowls[i] - '0');
            }
            frame++;
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