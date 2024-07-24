int calculateBowlingScore(string s) {
    int score = 0;
    int frame = 0;
    int ball = 0;
    int balls[21] = {0};
    
    for(char c : s) {
        if(c == 'X') {
            balls[ball++] = 10;
            frame++;
        } else if(c == '/') {
            balls[ball-1] = 10 - balls[ball-1];
            balls[ball++] = 0;
            frame++;
        } else if(c == '-') {
            balls[ball++] = 0;
            frame++;
        } else {
            balls[ball++] = c - '0';
            if(frame % 2 == 1 || c == '0') {
                frame++;
            }
        }
    }
    
    for(int i = 0; i < 10; i++) {
        if(balls[i*2] == 10) {
            score += 10 + balls[i*2+1] + balls[i*2+2];
        } else if(balls[i*2] + balls[i*2+1] == 10) {
            score += 10 + balls[i*2+2];
        } else {
            score += balls[i*2] + balls[i*2+1];
        }
    }
    
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << calculateBowlingScore(s) << endl;
    return 0;
}