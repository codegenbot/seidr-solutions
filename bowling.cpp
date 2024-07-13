int main() {
    string input;
    cin >> input;

    int score = 0;
    int frame = 0;
    int balls = 0;
    vector<int> frames(10, 0);

    for (char c : input) {
        if (c == 'X') {
            frames[frame] = 10;
            frame++;
        } else if (c == '/') {
            frames[frame] = 10 - frames[frame - 1];
            frame++;
            balls = 0;
        } else if (c == '-') {
            balls = 0;
            frame++;
        } else {
            if (balls == 0) {
                frames[frame] += c - '0';
            } else {
                frames[frame] += c - '0';
                if (frames[frame] == 10) {
                    frames[frame] += frames[frame - 1];
                }
                frame++;
            }
            balls++;
        }
    }

    for (int i = 0; i < 10; i++) {
        score += frames[i];
    }

    cout << score << endl;

    return 0;
}