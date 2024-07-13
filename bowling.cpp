int calculateBowlingScore(const string& bowls) {
    int score = 0;
    int frame = 0;
    int roll = 0;
    vector<int> frameScores(10, 0);

    for (char c : bowls) {
        if (c == 'X') {
            score += 10;
            if (frame < 9) {
                frameScores[frame] = 10;
                if (frame > 0 && frameScores[frame - 1] == 10) {
                    score += 10;
                }
                if (frame > 1 && frameScores[frame - 2] == 10) {
                    score += 10;
                }
                frame++;
            } else {
                roll++;
            }
        } else if (c == '/') {
            score += 10 - frameScores[frame];
            frameScores[frame] = 10;
            if (frame > 0 && frameScores[frame - 1] == 10) {
                score += 10 - frameScores[frame - 1];
            }
            frame++;
        } else if (c == '-') {
            roll++;
        } else {
            score += c - '0';
            frameScores[frame] += c - '0';
            if (frame > 0 && frameScores[frame - 1] == 10) {
                score += c - '0';
            }
            if (frame > 1 && frameScores[frame - 2] == 10) {
                score += c - '0';
            }
            if (roll % 2 == 1) {
                frame++;
            } else {
                roll++;
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