int bowling(string s) {
    int score = 0;
    int frame = 1;
    string roll;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '/') {
            int leftPin = stoi(s.substr(0, i));
            int rightPin = stoi(s.substr(i + 1));

            if (leftPin + rightPin >= 10) {
                score += 10;
            } else {
                score += leftPin + rightPin;
            }

            frame++;

            // If it's the last frame and it's a spare, add an extra roll
            if (frame == 10 && s[i] == '/') {
                i++;
                if (s[i] != 'X') {
                    score += stoi(s.substr(i));
                }
            }
        } else {
            score += stoi(s.substr(0, i + 1));

            // If it's the last frame and it's a strike
            if (i == s.size() - 1 && s[i] == 'X') {
                score += 10;
            }

            frame++;
        }
    }

    return score;
}