int scoreOfRound(string bowls) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    int frames[10] = {0};
    
    for (int i = 0; i < bowls.size(); i++) {
        if (bowls[i] == 'X') {
            frames[frame-1] = 10;
            if (frame > 1) {
                frames[frame-1] += frames[frame-2];
            }
            if (frame > 2) {
                frames[frame-1] += frames[frame-3];
            }
            if (ball == 0) {
                frame++;
            }
            ball = 0;
        } else if (bowls[i] == '/') {
            frames[frame-1] = 10 - frames[frame-1];
            if (frame > 1) {
                frames[frame-1] += frames[frame-2];
            }
            if (ball == 0) {
                frame++;
            }
            ball = 0;
        } else if (bowls[i] == '-') {
            ball++;
        } else {
            frames[frame-1] += bowls[i] - '0';
            if (ball == 1) {
                if (frame > 1) {
                    frames[frame-1] += frames[frame-2];
                }
                ball = 0;
                frame++;
            } else {
                ball++;
            }
        }
    }
    
    for (int i = 0; i < 10; i++) {
        score += frames[i];
    }
    
    return score;
}

int main() {
    string bowls;
    cin >> bowls;
    cout << scoreOfRound(bowls) << endl;
    return 0;
}