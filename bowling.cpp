int bowlingScore(string bowls) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    for (char c : bowls) {
        if (c == 'X') {
            score += 10;
            if (frame < 10) {
                score += (bowls[ball + 1] == 'X') ? 10 : (bowls[ball + 1] - '0');
                score += (bowls[ball + 2] == 'X') ? 10 : (bowls[ball + 2] == '/' ? 10 - (bowls[ball + 1] - '0') : (bowls[ball + 2] - '0'));
            }
            ball++;
        } else if (c == '/') {
            score += 10 - (bowls[ball - 1] - '0');
            score += (bowls[ball + 1] == 'X') ? 10 : (bowls[ball + 1] - '0');
            ball += 2;
        } else if (c == '-') {
            // do nothing
        } else {
            score += c - '0';
            if (frame < 10 && (c - '0' + (bowls[ball + 1] == '/' || bowls[ball + 1] == 'X' ? 10 - (c - '0') : bowls[ball + 1] - '0')) == 10) {
                score += (bowls[ball + 1] == 'X') ? 10 : (bowls[ball + 1] - '0');
            }
            ball++;
        }

        if (c == 'X' || ball % 2 == 0) {
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