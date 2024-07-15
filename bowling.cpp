int calculateBowlingScore(string bowls) {
    int frame = 0;
    int score = 0;
    vector<int> rolls;
    for (char c : bowls) {
        if (c == 'X') {
            rolls.push_back(10);
            frame++;
        } else if (c == '/') {
            rolls.push_back(10 - rolls.back());
        } else if (c == '-') {
            rolls.push_back(0);
            if (frame % 2 == 1) {
                frame++;
            }
        } else {
            rolls.push_back(c - '0');
            if (rolls.size() % 2 == 0 || c == '5') {
                frame++;
            }
        }
    }
    for (int i = 0; i < rolls.size(); i++) {
        if (rolls[i] == 10) {
            score += 10 + rolls[i + 1] + rolls[i + 2];
        } else if (i % 2 == 1 && rolls[i] + rolls[i - 1] == 10) {
            score += 10 + rolls[i + 1];
        } else {
            score += rolls[i];
        }
    }
    return score;
}

int main() {
    string bowls;
    getline(cin, bowls);
    int score = calculateBowlingScore(bowls);
    cout << score << endl;
    return 0;
}