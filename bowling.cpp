int bowlingScore(string input) {
    int score = 0;
    vector<int> frames;

    for (char c : input) {
        if (c == 'X') {
            frames.push_back(10);
        } else if (c == '/') {
            frames.push_back(10 - stoi(input.substr(input.find('/'), 2)));
        } else {
            int strikes = 0;
            while (input[input.find(c)] != '/' && input.find(c) < input.size() - 1) {
                c++;
                strikes++;
            }
            frames.push_back(strikes);
        }
    }

    for (int i = 0; i < frames.size(); i++) {
        if (frames[i] == 10) {
            score += 10 + (i < 8 ? frames[i+1] : 0);
        } else {
            score += frames[i];
        }
    }

    return score;
}