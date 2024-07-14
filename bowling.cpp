int scoreOfBowlingGame(string input) {
    int totalScore = 0;
    string frame;
    for (int i = 0; i < 10; i++) {
        if (input[i] == 'X') {
            totalScore += 30;
            continue;
        }
        if (input[i] == '/') {
            frame = input.substr(0, i);
            int first = stoi(frame.substr(0, frame.find('/')));
            int second = 10 - first;
            totalScore += first + second;
            continue;
        }
        int first = stoi(frame.substr(0, i));
        int second = 10 - first;
        if (second == 0) {
            totalScore += first * 2;
        } else {
            totalScore += first + second;
        }
    }
    return totalScore;
}