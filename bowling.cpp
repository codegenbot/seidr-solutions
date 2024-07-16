int scoreBowlingRound(const string& bowls) {
    int score = 0;
    bool isSpare = false;
    int frame = 1;

    for (int i = 0; i < bowls.size(); ++i) {
        if (bowls[i] == 'X') {
            score += 10;
            if (frame < 10) {
                score += (bowls[i + 1] == 'X') ? 10 : (bowls[i + 1] - '0');
                score += (bowls[i + 2] == 'X') ? 10 : (bowls[i + 2] == '/' ? 10 - (bowls[i + 1] - '0') : (bowls[i + 2] - '0'));
            }
            if (frame == 10) {
                score += (bowls[i + 1] == 'X') ? 10 : (bowls[i + 1] == '/' ? 10 - (bowls[i + 2] - '0') : (bowls[i + 1] - '0'));
                score += (bowls[i + 2] == 'X') ? 10 : (bowls[i + 2] == '/' ? 10 - (bowls[i + 1] - '0') : (bowls[i + 2] - '0'));
            }
            frame++;
        } else if (bowls[i] == '/') {
            score += 10 - (bowls[i - 1] - '0');
            if (frame < 10) {
                score += (bowls[i + 1] == 'X') ? 10 : (bowls[i + 1] - '0');
            }
            if (frame == 10) {
                score += (bowls[i + 1] == 'X') ? 10 : (bowls[i + 1] == '/' ? 10 - (bowls[i + 2] - '0') : (bowls[i + 1] - '0'));
            }
            frame++;
        } else {
            score += bowls[i] - '0';
        }
    }

    return score;
}

int main() {
    string bowls;
    cin >> bowls;
    cout << scoreBowlingRound(bowls) << endl;
    return 0;
}