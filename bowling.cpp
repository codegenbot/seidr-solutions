int calculateBowlingScore(const string& bowls) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    int frameScore = 0;
    vector<int> scores;

    for (char c : bowls) {
        if (c == 'X') {
            scores.push_back(10);
            if (frame < 10) {
                scores.push_back(0);
            }
            frame++;
        } else if (c == '/') {
            scores.push_back(10 - scores.back());
        } else if (c == '-') {
            scores.push_back(0);
        } else {
            scores.push_back(c - '0');
        }
    }

    for (int i = 0; i < scores.size(); i++) {
        if (frameScore == 10 || ball == 2) {
            frame++;
            frameScore = 0;
            ball = 0;
        }

        frameScore += scores[i];
        score += scores[i];

        if (scores[i] == 10) {
            score += scores[i + 1] + scores[i + 2];
            ball = 2;
        } else if (frameScore == 10 || ball == 1) {
            score += scores[i + 1];
            ball = 1;
        } else {
            ball++;
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