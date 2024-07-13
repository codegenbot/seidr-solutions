int bowlingScore(const string& bowls) {
    int score = 0;
    int frame = 0;
    for (int i = 0; i < bowls.size(); ++i) {
        if (bowls[i] == 'X') {
            score += 10;
            if (frame < 9) {
                score += (bowls[i + 1] == 'X' ? 10 : (bowls[i + 1] == '/' ? 10 - bowls[i - 1] + 10 : bowls[i + 1] - '0') + (bowls[i + 2] == 'X' ? 10 : (bowls[i + 2] == '/' ? 10 - bowls[i + 1] + 10 : bowls[i + 2] - '0')));
            }
            ++frame;
        } else if (bowls[i] == '/') {
            score += 10 - bowls[i - 1] + (bowls[i + 1] == 'X' ? 10 : bowls[i + 1] - '0');
            if (frame < 9) {
                score += (bowls[i + 1] == 'X' ? 10 : bowls[i + 1] - '0');
            }
            ++frame;
        } else if (bowls[i] == '-') {
            if (frame < 9) {
                score += (bowls[i + 1] == 'X' ? 10 : (bowls[i + 1] == '/' ? 10 - bowls[i - 1] + 10 : bowls[i + 1] - '0'));
            }
            ++frame;
        } else {
            score += bowls[i] - '0';
            if (frame < 9) {
                if (i < bowls.size() - 1 && bowls[i + 1] == '/') {
                    score += 10 - (bowls[i] - '0');
                }
            }
        }
    }
    return score;
}