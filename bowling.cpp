int getScore(string input) {
    int score = 0;
    int frame = 0;
    int rolls[22] = {0};

    for(char c : input) {
        if(c == 'X') {
            rolls[frame++] = 10;
        } else if(c == '/') {
            rolls[frame-1] = 10 - rolls[frame-1];
        } else if(c == '-') {
            rolls[frame++] = 0;
        } else {
            rolls[frame++] = c - '0';
        }
    }

    for(int i = 0; i < 10; ++i) {
        if(rolls[i*2] == 10) {
            score += 10 + rolls[i*2+2] + rolls[i*2+3];
            if(rolls[i*2+2] == 10) {
                score += rolls[i*2+4];
            }
        } else if(rolls[i*2] + rolls[i*2+1] == 10) {
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
    cout << getScore(input) << endl;
    return 0;
}