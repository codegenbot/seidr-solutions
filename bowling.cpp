int score(string frames) {
    int totalScore = 0;
    int frame = 1;
    int ball = 0;
    vector<int> scores;
    for (char c : frames) {
        if (c == 'X') {
            scores.push_back(10);
            if (frame < 10) {
                scores.push_back(0);
            }
        } else if (c == '/') {
            scores.push_back(10 - scores.back());
        } else if (c == '-') {
            scores.push_back(0);
        } else {
            scores.push_back(c - '0');
        }
    }
    for (int i = 0; i < scores.size(); ++i) {
        totalScore += scores[i];
        if (frame < 10 && (scores[i] == 10 || ball == 1)) {
            totalScore += scores[i+1];
            if (scores[i] == 10 && scores[i+2] != 10) {
                totalScore += scores[i+2];
            }
            if (scores[i] == 10) {
                ball = 0;
            } else {
                ball = 1;
            }
            frame++;
        } else {
            ball = (ball + 1) % 2;
        }
    }
    return totalScore;
}

int main() {
    string frames;
    cin >> frames;
    cout << score(frames) << endl;
    return 0;
}