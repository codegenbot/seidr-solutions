int scoreBowlingRound(string bowls) {
    int score = 0;
    int frame = 0;
    for (int i = 0; i < bowls.size(); ++i) {
        if (bowls[i] == 'X') {
            score += 10;
            if (frame >= 1 && bowls[i - 1] == 'X') {
                score += 10;
            }
            if (frame >= 2 && bowls[i - 2] == 'X') {
                score += 10;
            }
            frame++;
        } else if (bowls[i] == '/') {
            score += 10 - (bowls[i - 1] - '0');
            if (frame >= 1 && bowls[i - 1] == 'X') {
                score += 10 - (bowls[i - 2] - '0');
            }
            frame++;
        } else if (bowls[i] == '-') {
            // Do nothing for a miss
        } else {
            score += bowls[i] - '0';
            frame++;
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