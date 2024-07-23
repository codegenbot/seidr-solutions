int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    int rolls[22] = {0};
    
    for (char c : s) {
        if (c == 'X') {
            rolls[ball++] = 10;
            if (frame < 10) {
                rolls[ball++] = 0;
            }
            frame++;
        } else if (c == '/') {
            rolls[ball - 1] = 10 - rolls[ball - 2];
            if (frame < 10) {
                rolls[ball++] = 0;
            }
            frame++;
        } else if (c == '-') {
            rolls[ball++] = 0;
        } else {
            rolls[ball++] = c - '0';
            if (frame % 2 == 0) {
                frame++;
            }
        }
    }
    
    for (int i = 0; i < 20; i++) {
        if (rolls[i] == 10) {
            score += 10 + rolls[i + 1] + rolls[i + 2];
        } else if (rolls[i] + rolls[i + 1] == 10) {
            score += 10 + rolls[i + 2];
            i++;
        } else {
            score += rolls[i] + rolls[i + 1];
            i++;
        }
    }
    
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << bowlingScore(s) << endl;
    return 0;
}