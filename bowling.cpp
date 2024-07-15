int scoreBowlingRound(const string& input) {
    int score = 0;
    int frame = 1;
    int bowl = 0;
    int rolls[21] = {0};

    for (char c : input) {
        if (c == 'X') {
            rolls[bowl++] = 10;
            if (frame < 10) frame++;
        } else if (c == '/') {
            rolls[bowl++] = 10 - rolls[bowl-1];
            if (frame < 10) frame++;
        } else if (c == '-') {
            rolls[bowl++] = 0;
        } else {
            rolls[bowl++] = c - '0';
            if (frame < 10) frame++;
        }
    }

    for (int i = 0; i < 10; i++) {
        if (rolls[i*2] == 10) {
            score += 10 + rolls[i*2+2] + rolls[i*2+3];
            if (rolls[i*2+2] == 10) score += rolls[i*2+4];
        } else if (rolls[i*2] + rolls[i*2+1] == 10) {
            score += 10 + rolls[i*2+2];
        } else {
            score += rolls[i*2] + rolls[i*2+1];
        }
    }

    return score;
}

int main() {
    string input;
    cin >> input;
    cout << scoreBowlingRound(input) << endl;
    return 0;
}