int calculateBowlingScore(const string& bowls) {
    int score = 0;
    int frame = 1;
    int bowlIndex = 0;

    for (int i = 0; i < 10; ++i) {
        if (bowls[bowlIndex] == 'X') {
            score += 10;
            score += (bowls[bowlIndex + 1] == 'X') ? 10 : (bowls[bowlIndex + 1] == '/' ? 10 - (bowls[bowlIndex - 1] - '0') : bowls[bowlIndex + 1] - '0');
            score += (bowls[bowlIndex + 2] == 'X') ? 10 : (bowls[bowlIndex + 2] == '/' ? 10 - (bowls[bowlIndex + 1] - '0') : bowls[bowlIndex + 2] - '0');
            bowlIndex += 1;
        } else if (bowls[bowlIndex + 1] == '/') {
            score += 10;
            score += (bowls[bowlIndex + 2] == 'X') ? 10 : bowls[bowlIndex + 2] - '0';
            bowlIndex += 2;
        } else {
            score += bowls[bowlIndex] - '0';
            score += bowls[bowlIndex + 1] - '0';
            bowlIndex += 2;
        }
        frame++;
    }

    return score;
}

int main() {
    string bowls;
    cin >> bowls;
    cout << calculateBowlingScore(bowls) << endl;
    return 0;
}