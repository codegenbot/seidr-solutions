int bowlingScore(string input) {
    int score = 0;
    int frame = 0;
    int ball = 0;
    vector<int> rolls;

    for (char c : input) {
        if (c == 'X') {
            rolls.push_back(10);
            frame++;
            if (frame == 10) break;
            continue;
        }

        if (c == '/') {
            rolls.push_back(10 - rolls.back());
            frame++;
            ball = 0;
            if (frame == 10) break;
            continue;
        }

        if (c == '-') {
            rolls.push_back(0);
        } else {
            rolls.push_back(c - '0');
        }

        ball++;
        if (ball == 2) {
            ball = 0;
            frame++;
            if (frame == 10) break;
        }
    }

    frame = 0;

    for (int i = 0; i < rolls.size(); i++) {
        int cur = rolls[i];
        if (cur == 10) {
            score += 10 + rolls[i + 1] + rolls[i + 2];
            frame++;
        } else {
            score += cur;
            if (frame < 10 && (i + 1 < rolls.size() && i + 2 < rolls.size()) && rolls[i] + rolls[i + 1] == 10) {
                score += rolls[i + 2];
            }
            i++;
            frame++;
        }
    }

    return score;
}

int main() {
    string input;
    cin >> input;
    cout << bowlingScore(input) << endl;
    return 0;
}