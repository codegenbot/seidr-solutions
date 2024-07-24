int findScore(string bowls) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    int rolls[21];

    for (char c : bowls) {
        if (c == 'X') {
            rolls[ball++] = 10;
            if (frame < 10) {
                rolls[ball++] = 0;
            }
        } else if (c == '/') {
            rolls[ball - 1] = 10 - rolls[ball - 2];
        } else if (c == '-') {
            rolls[ball++] = 0;
        } else {
            rolls[ball++] = c - '0';
        }
    }

    for (int i = 0; i < 10; i++) {
        if (rolls[frame * 2 - 2] == 10) {
            score += 10 + rolls[frame * 2] + rolls[frame * 2 + 1];
            frame++;
        } else if (rolls[frame * 2 - 2] + rolls[frame * 2 - 1] == 10) {
            score += 10 + rolls[frame * 2];
            frame++;
        } else {
            score += rolls[frame * 2 - 2] + rolls[frame * 2 - 1];
            frame++;
        }
    }

    return score;
}

int main() {
    string bowls;
    cin >> bowls;
    cout << findScore(bowls) << endl;
    return 0;
}