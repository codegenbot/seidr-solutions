int main() {
    string bowls;
    cin >> bowls;

    int score = 0;
    int frame = 1;
    int ball = 0;
    for (char c : bowls) {
        if (c == 'X') {
            score += 10;
            if (frame < 10) {
                score += (bowls[ball + 1] == 'X') ? 10 : (isdigit(bowls[ball + 1]) ? bowls[ball + 1] - '0' : 10);
                score += (bowls[ball + 2] == 'X') ? 10 : (isdigit(bowls[ball + 2]) ? bowls[ball + 2] - '0' : 10);
            }
            ball++;
            if (frame < 10) {
                frame++;
            }
        } else if (c == '/') {
            score += 10 - (bowls[ball - 1] - '0');
            score += (bowls[ball + 1] == 'X') ? 10 : (isdigit(bowls[ball + 1]) ? bowls[ball + 1] - '0' : 10);
            ball++;
            if (frame < 10) {
                frame++;
            }
        } else if (isdigit(c)) {
            score += c - '0';
            if (frame < 10) {
                if (ball % 2 == 1) {
                    frame++;
                }
            }
        }
        ball++;
    }

    cout << score << endl;

    return 0;
}