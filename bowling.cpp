int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            string frame = s.substr(i, 3);
            int firstPin = stoi(frame.substr(1, 1));
            int secondPin = stoi(frame.substr(2, 1));
            score += firstPin + secondPin;
        } else {
            for (int j = i; j < i+2; j++) {
                if (s[j] == 'X') {
                    score += 30 - (10 - i);
                    break;
                } else if (s[j] == '/') {
                    string frame = s.substr(j, 3);
                    int firstPin = stoi(frame.substr(1, 1));
                    int secondPin = stoi(frame.substr(2, 1));
                    score += firstPin + secondPin;
                    break;
                }
            }
        }
    }
    return score;
}