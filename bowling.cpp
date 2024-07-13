int calculateScore(const string& bowls) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    vector<int> rolls;

    for (char ch : bowls) {
        if (ch == 'X') {
            rolls.push_back(10);
            if (frame < 10) {
                rolls.push_back(0);
            }
        } else if (ch == '/') {
            rolls.push_back(10 - rolls.back());
        } else if (ch == '-') {
            rolls.push_back(0);
        } else {
            rolls.push_back(ch - '0');
        }

        ++ball;

        if (frame < 10 && ((ch == 'X') || (ball == 2))) {
            score += rolls[rolls.size() - 3] + rolls[rolls.size() - 2] + rolls[rolls.size() - 1];
            frame++;
            ball = 0;
        } else if (frame == 10 && rolls.size() == 21) {
            score += rolls[rolls.size() - 3] + rolls[rolls.size() - 2] + rolls[rolls.size() - 1];
        }
    }

    return score;
}

int main() {
    string bowls;
    cin >> bowls;

    int score = calculateScore(bowls);
    cout << score << endl;

    return 0;
}