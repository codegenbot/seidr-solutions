int bowlingScore(string bowls) {
    int score = 0, frame = 0, ball = 0;
    for (char c : bowls) {
        if (c == 'X') {
            score += 10;
            if (frame < 9) {
                if (bowls[ball + 1] == 'X') {
                    score += 10 + ((frame == 8) ? 10 : (bowls[ball + 2] == 'X') ? 10 : bowls[ball + 2] - '0');
                } else {
                    score += (bowls[ball + 2] == '/') ? 10 : bowls[ball + 1] - '0' + bowls[ball + 2] - '0';
                }
            }
            ball++;
            frame++;
        } else if (c == '/') {
            score += 10 - (bowls[ball - 1] - '0');
            score += (frame == 9) ? 0 : bowls[ball + 1] - '0';
            ball++;
            frame++;
        } else if (c == '-') {
            ball++;
            frame++;
        } else {
            score += c - '0';
            if (frame < 9 && c != '0' && bowls[ball + 1] == '/') {
                score += 10 - (c - '0');
            }
            ball++;
            frame++;
        }
    }
    return score;
}
int main() {
    string bowls;
    cin >> bowls;
    cout << bowlingScore(bowls) << endl;
    return 0;
}