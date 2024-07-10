int score(string s) {
    int totalScore = 0;
    int frame = 1;
    int bowl = 0;
    vector<int> scores(25, 0);
    
    for (char c : s) {
        if (c == 'X') {
            scores[bowl++] = 10;
            if (frame < 10) {
                scores[bowl++] = 0;
            }
            frame++;
        } else if (c == '/') {
            scores[bowl - 1] = 10 - scores[bowl - 2];
            frame++;
        } else if (c == '-') {
            scores[bowl++] = 0;
        } else {
            scores[bowl++] = c - '0';
            if (frame < 10) {
                if (scores[bowl - 1] + scores[bowl - 2] == 10) {
                    scores[bowl++] = 0;
                }
                frame++;
            }
        }
    }
    
    for (int i = 0, f = 1; f <= 10; ++f) {
        if (scores[i] == 10) {
            totalScore += 10 + scores[i + 1] + scores[i + 2];
            i++;
        } else if (scores[i] + scores[i + 1] == 10) {
            totalScore += 10 + scores[i + 2];
            i += 2;
        } else {
            totalScore += scores[i] + scores[i + 1];
            i += 2;
        }
    }
    
    return totalScore;
}