int bowlingScore(string s) {
    int score = 0;
    int frame = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 30;
            frame++;
        } else if (s[i] == '/') {
            int strike = s.find('/', i);
            int spare = s.find('X', i) - i;

            if (strike != string::npos && spare != string::npos) {
                if (strike < i + 2) {
                    score += 10;
                    for (int j = i; j <= i + 1; j++) {
                        if (s[j] == 'X') {
                            score += 30;
                        } else if (s[j] == '/') {
                            int pos = s.find('/', j);
                            score += pos - j;
                        }
                    }
                } else if (spare < i + 2) {
                    score += 10 + s[i + spare];
                }
            }

            i = strike > 0 ? strike : i;
        } else {
            int pos = s.find('/', i);
            int value = s[i] - '0';
            if (pos == string::npos) {
                score += value * 2;
            } else {
                score += value + s[pos - 1] - '0';
            }
        }

        frame++;
    }

    return score;
}