int score(string input) {
    int totalScore = 0;
    int frame = 0;
    int rolls[21] = {0};
    
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == 'X') {
            rolls[frame] = 10;
            frame++;
        } else if (input[i] == '/') {
            rolls[frame] = 10 - rolls[frame - 1];
            frame++;
        } else if (input[i] == '-') {
            rolls[frame] = 0;
            frame++;
        } else {
            rolls[frame] = input[i] - '0';
            frame++;
        }
    }
    
    frame = 0;
    for (int i = 0; i < 10; i++) {
        if (rolls[frame] == 10) {
            totalScore += 10 + rolls[frame + 1] + rolls[frame + 2];
            frame++;
        } else if (rolls[frame] + rolls[frame + 1] == 10) {
            totalScore += 10 + rolls[frame + 2];
            frame += 2;
        } else {
            totalScore += rolls[frame] + rolls[frame + 1];
            frame += 2;
        }
    }
    
    return totalScore;
}

int main() {
    string input;
    cin >> input;
    
    cout << score(input) << endl;
    
    return 0;
}