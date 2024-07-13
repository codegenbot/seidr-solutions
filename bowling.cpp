int scoreBowlingRound(const string &bowls) {
    int score = 0;
    int frame = 1;
    int bowlIndex = 0;
    while (frame <= 10) {
        if (bowls[bowlIndex] == 'X') {
            score += 10;
            if (frame < 10) {
                score += (bowls[bowlIndex + 2] == 'X') ? 10 : (bowls[bowlIndex + 2] - '0');
                score += (bowls[bowlIndex + 4] == 'X') ? 10 : (bowls[bowlIndex + 4] == '/' ? 10 - (bowls[bowlIndex + 2] - '0') : (bowls[bowlIndex + 4] - '0'));
                bowlIndex += 2;
            }
        } else if (bowls[bowlIndex + 1] == '/') {
            score += 10;
            score += (bowls[bowlIndex + 2] == 'X') ? 10 : (bowls[bowlIndex + 2] - '0');
            bowlIndex += 3;
        } else {
            score += (bowls[bowlIndex] - '0') + (bowls[bowlIndex + 1] - '0');
            bowlIndex += 2;
        }
        frame++;
    }
    return score;
}

int main() {
    string bowls;
    cin >> bowls;
    int result = scoreBowlingRound(bowls);
    cout << result << endl;
    return 0;
}