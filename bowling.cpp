int calculateBowlingScore(string input) {
    int score = 0;
    int frame = 0;
    int frames[10] = {0};

    for (int i = 0; i < input.size(); i++) {
        if (input[i] == 'X') {
            frames[frame] = 10;
            frame++;
        } else if (input[i] == '/') {
            frames[frame] = 10 - frames[frame-1];
            frame++;
        } else if (input[i] == '-') {
            frames[frame] = 0;
            frame++;
        } else {
            frames[frame] = input[i] - '0';
            if (frame % 2 == 1) {
                if (frames[frame-1] + frames[frame] == 10) {
                    frames[frame] = 10;
                }
            }
            frame++;
        }
    }

    for (int i = 0; i < 10; i++) {
        score += frames[i];
        if (frames[i] == 10) {
            if (frames[i+1] == 10) {
                score += frames[i+1] + frames[i+2];
            } else {
                score += frames[i+1];
            }
        } else if (frames[i-1] + frames[i] == 10) {
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