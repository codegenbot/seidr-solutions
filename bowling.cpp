int scoreBowlingRound(const string& bowls) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    for (int i = 0; i < bowls.size(); ++i) {
        if (frame > 10) break;
        if (bowls[i] == 'X') {
            score += 10;
            if (frame <= 9) {
                score += (bowls[i + 1] == 'X') ? 10 : ((bowls[i + 2] == '/') ? 10 : (bowls[i + 1] - '0' + bowls[i + 2] - '0'));
            }
            ball = 0;
            ++frame;
        } else if (bowls[i] == '/') {
            score += 10 - (bowls[i - 1] - '0');
            score += (bowls[i + 1] == 'X') ? 10 : (bowls[i + 1] - '0');
            ball = 0;
            ++frame;
        } else {
            score += bowls[i] - '0';
            if (++ball == 2) {
                ball = 0;
                if (frame <= 9 && (bowls[i] != '-' && bowls[i - 1] != '/')) ++frame;
            }
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