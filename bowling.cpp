int bowlingScore(const string& input) {
    int score = 0;
    int frame = 1;
    for (char c : input) {
        if (c == 'X') {
            score += 30;
            frame++;
        } else if (c == '/') {
            score += 10 - ((input[input.size() - input.find(c)] - '0') + (input[input.size() - input.find('/', input.find(c) + 1)] - '0')));
            frame++;
        } else {
            int points = c - '0' + (input[input.size() - input.find(c, input.find(c)) - 1] - '0');
            if (points == 10) {
                score += 10;
                frame++;
            } else {
                score += points;
                frame++;
                if (frame < 10 && input[input.size() - input.find(c)] != '/') {
                    points = c - '0' + (input[input.size() - input.find(c, input.find(c)) - 1] - '0');
                    score += points;
                    frame++;
                }
            }
        }
    }
    return score;
}