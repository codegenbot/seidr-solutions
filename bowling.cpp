int calculateBowlingScore(string bowls) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    int rolls[22];

    for (char bowl : bowls) {
        if (bowl == 'X') {
            rolls[ball++] = 10;
            rolls[ball++] = 0;
            frame++;
        } else if (bowl == '/') {
            rolls[ball - 1] = 10 - rolls[ball - 2];
            frame++;
        } else if (bowl == '-') {
            rolls[ball++] = 0;
        } else {
            rolls[ball++] = bowl - '0';
            if (ball % 2 == 0) {
                if (rolls[ball - 1] + rolls[ball - 2] == 10) {
                    frame++;
                } else {
                    frame += 2;
                }
            }
        }
    }

    for (int i = 0; i < 20 && frame <= 10; i++) {
        if (rolls[i] == 10) {
            score += 10 + rolls[i + 2] + rolls[i + 4];
        } else if (rolls[i] + rolls[i + 1] == 10) {
            score += 10 + rolls[i + 2];
            i++;
        } else {
            score += rolls[i] + rolls[i + 1];
            i++;
        }
        frame++;
    }

    return score;
}

int main() {
    string input;
    cin >> input;
    cout << calculateBowlingScore(input) << endl;
    return 0;
}