int score(string bowls) {
    int totalScore = 0;
    int frame = 1;
    int ball = 0;
    int frameScore = 0;
    vector<int> scores;

    for (char ch : bowls) {
        if (ch == 'X') {
            scores.push_back(10);
            if (frame < 10) {
                scores.push_back(0);
            }
            frame++;
        } else if (ch == '/') {
            scores.push_back(10 - scores.back());
            frame++;
        } else if (ch == '-') {
            scores.push_back(0);
        } else {
            scores.push_back(ch - '0');
        }
    }

    for (int i = 0; i < scores.size(); i++) {
        frameScore += scores[i];
        if ((frameScore == 10 || ball == 1) && frame > 1) {
            totalScore += scores[i];
        }

        if (frameScore == 10 || ball == 1) {
            frameScore = 0;
            ball = 0;
        } else {
            ball = 1;
        }
    }

    return totalScore;
}