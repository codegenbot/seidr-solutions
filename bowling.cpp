int calculateBowlingScore(const string& bowls) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    vector<int> frameScores(10, 0);

    for (char c : bowls) {
        if (c == 'X') {
            frameScores[frame - 1] = 10;
            if (frame < 10) frame++;
            ball = 0;
        } else if (c == '/') {
            frameScores[frame - 1] = 10;
            ball = 1;
        } else if (c == '-') {
            ball++;
            if (ball == 2) {
                if (frame < 10) frame++;
                ball = 0;
            }
        } else {
            int pins = c - '0';
            frameScores[frame - 1] += pins;
            if (ball == 1) {
                if (frame < 10) frame++;
                ball = 0;
            } else {
                ball++;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        score += frameScores[i];
        if (i > 0 && frameScores[i - 1] == 10) {
            score += frameScores[i];
            if (i > 1 && frameScores[i - 2] == 10) {
                score += frameScores[i];
            }
        }
    }

    return score;
}

int main() {
    string bowls;
    cin >> bowls;
    cout << calculateBowlingScore(bowls) << endl;
    return 0;
}