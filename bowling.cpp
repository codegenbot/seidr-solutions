int score(string input) {
    int totalScore = 0, frame = 0, frameCount = 0;
    vector<int> scores(22, 0);
    for(int i = 0; i < input.size(); i++) {
        if(input[i] == 'X') {
            scores[frame++] = 10;
            if(frameCount >= 2) {
                scores[frame - 3] += 10;
            }
            if(frameCount >= 1) {
                scores[frame - 2] += 10;
            }
            frameCount++;
        } else if(input[i] == '/') {
            scores[frame++] = 10 - scores[frame - 1];
            if(frameCount >= 1) {
                scores[frame - 2] += scores[frame - 1];
            }
            frameCount = 0;
        } else {
            scores[frame++] = input[i] - '0';
            if(frameCount >= 1) {
                scores[frame - 2] += scores[frame - 1];
            }
            frameCount++;
        }
    }
    for(int i = 0; i < 10; i++) {
        totalScore += scores[i];
    }
    return totalScore;
}