int scoreBowlingRound(const string& bowls) {
    int score = 0;
    int frame = 0;
    int turn = 0;
    while (frame < 10) {
        if (bowls[turn] == 'X') {
            score += 10 + ((bowls[turn + 1] == 'X') ? 10 : (bowls[turn + 1] == '/' ? 10 : bowls[turn + 1] - '0')) + ((bowls[turn + 2] == 'X') ? 10 : (bowls[turn + 2] == '/' ? 10 : bowls[turn + 2] - '0'));
            frame++;
        } else if (bowls[turn + 1] == '/') {
            score += 10 + ((bowls[turn + 2] == 'X') ? 10 : bowls[turn + 2] - '0');
            frame++;
        } else {
            score += (bowls[turn] == '-' ? 0 : bowls[turn] - '0') + (bowls[turn + 1] == '-' ? 0 : bowls[turn + 1] - '0');
            frame++;
        }
        turn += (bowls[turn] == 'X' ? 1 : 2);
    }
    return score;
}

int main() {
    string bowls;
    cin >> bowls;
    cout << scoreBowlingRound(bowls) << endl;
    return 0;
}