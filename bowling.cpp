int bowlingScore(string bowls) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    for (int i = 0; i < bowls.size(); ++i) {
        if (frame > 10) break;
        if (bowls[i] == 'X') {
            score += 10;
            if (frame < 10) {
                score += (bowls[i + 2] == 'X' ? 10 : (bowls[i + 2] == '/' ? 10 - (bowls[i + 1] - '0') : bowls[i + 1] - '0'));
                score += (bowls[i + 4] == 'X' ? 10 : (bowls[i + 4] == '/' ? 10 - (bowls[i + 3] - '0') : bowls[i + 3] - '0'));
                i++;
            } else {
                score += (bowls[i + 1] == 'X' ? 10 : (bowls[i + 1] == '/' ? 10 - (bowls[i + 2] - '0') : bowls[i + 2] - '0'));
                score += (bowls[i + 2] == 'X' ? 10 : (bowls[i + 2] == '/' ? 10 - (bowls[i + 3] - '0') : bowls[i + 3] - '0'));
            }
            frame++;
        } else if (bowls[i] == '/') {
            score += 10 - (bowls[i - 1] - '0');
            score += (bowls[i + 1] == 'X' ? 10 : bowls[i + 1] - '0');
            i++;
            frame++;
        } else {
            score += bowls[i] - '0';
            if (ball % 2 == 1) frame++;
        }
        ball++;
    }
    return score;
}

int main() {
    string bowls;
    cin >> bowls;
    cout << bowlingScore(bowls) << endl;
    return 0;
}