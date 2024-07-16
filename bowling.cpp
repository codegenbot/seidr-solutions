int scoreOfBowlingRound(const string& bowls) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    vector<int> frameScores;

    for (char bowl : bowls) {
        if (bowl == 'X') {
            score += 10;
            if (frame < 10) {
                frameScores.push_back(10);
            }
            if (frame < 10) {
                frame++;
            }
            ball = 0;
        } else if (bowl == '/') {
            score += 10 - frameScores.back();
            frameScores.pop_back();
            frameScores.push_back(10);
            ball = 0;
            if (frame < 10) {
                frame++;
            }
        } else if (bowl == '-') {
            ball++;
            if (ball == 2) {
                if (frame < 10) {
                    frame++;
                }
                ball = 0;
            }
        } else {
            score += bowl - '0';
            if (frame < 10) {
                if (ball == 0) {
                    frameScores.push_back(bowl - '0');
                    ball++;
                } else {
                    int prevScore = frameScores.back();
                    frameScores.pop_back();
                    int frameScore = prevScore + (bowl - '0');
                    score += frameScore;
                    frameScores.push_back(frameScore);
                    if (frame < 10) {
                        frame++;
                    }
                    ball = 0;
                }
            } else {
                ball++;
                if (ball == 2) {
                    break;
                }
            }
        }
    }

    return score;
}

int main() {
    string bowls;
    cin >> bowls;
    cout << scoreOfBowlingRound(bowls) << endl;
    return 0;
}