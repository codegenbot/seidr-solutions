int calculateBowlingScore(const string& bowls) {
    int score = 0;
    int frame = 1;
    int bowlIndex = 0;
    int rolls[21];
    
    for (char c : bowls) {
        if (c == 'X') {
            rolls[bowlIndex++] = 10;
            if (frame < 10) {
                rolls[bowlIndex++] = 0;
            }
            frame++;
        } else if (c == '/') {
            rolls[bowlIndex - 1] = 10 - rolls[bowlIndex - 2];
        } else if (c == '-') {
            rolls[bowlIndex++] = 0;
        } else {
            rolls[bowlIndex++] = c - '0';
        }
    }
    
    for (int i = 0; i < 10; i++) {
        if (rolls[i * 2] == 10) { // Strike
            score += 10 + rolls[i * 2 + 2] + rolls[i * 2 + 3];
        } else if (rolls[i * 2] + rolls[i * 2 + 1] == 10) { // Spare
            score += 10 + rolls[i * 2 + 2];
        } else {
            score += rolls[i * 2] + rolls[i * 2 + 1];
        }
    }
    
    return score;
}

int main() {
    string input;
    cin >> input;
    cout << calculateBowlingScore(input) << endl;
    
    return 0;
}