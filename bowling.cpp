int getScore(string input) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    vector<int> frames(10, 0);

    for (char c : input) {
        if (c == 'X') {
            frames[frame] = 10;
            if (frame >= 1 && frames[frame - 1] == 10) {
                score += 10 + frames[frame + 1];
            }
            if (frame >= 2 && frames[frame - 1] == 10 && frames[frame - 2] == 10) {
                score += 10;
            }
            frame++;
        } else if (c == '/') {
            frames[frame] = 10 - frames[frame - 1];
            score += 10 + frames[frame + 1];
            frame++;
        } else if (c == '-') {
            frames[frame] = 0;
        } else {
            frames[frame] = c - '0';
            score += frames[frame];
            if (frame >= 1 && frames[frame - 1] + frames[frame] == 10) {
                score += frames[frame + 1];
            }
            frame++;
        }

        if (++ball % 2 == 0) {
            ball = 0;
        }

        if (frame > 10) {
            break;
        }
    }

    return score;
}

int main() {
    string input;
    cin >> input;
    int result = getScore(input);
    cout << result << endl;
    return 0;
}