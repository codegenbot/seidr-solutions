int calculateBowlingScore(string s) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    vector<int> frames(10, 0);
    
    for (char c : s) {
        if (c == 'X') {
            frames[frame-1] = 10;
            frame++;
        } else if (c == '/') {
            frames[frame-1] = 10 - frames[frame-2];
            frame++;
        } else if (c == '-') {
            frames[frame-1] = 0;
            frame++;
        } else {
            frames[frame-1] += c - '0';
            ball = 1 - ball;
            if (ball == 0) {
                frame++;
            }
        }
    }
    
    for (int i = 0; i < 10; i++) {
        score += frames[i];
        if (frames[i] == 10) {
            if (i < 9) {
                score += frames[i+1];
                if (frames[i+1] == 10) {
                    score += frames[i+2];
                }
            }
        } else if (frames[i] + frames[i-1] == 10 && frames[i-1] != 10) {
            score += frames[i+1];
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