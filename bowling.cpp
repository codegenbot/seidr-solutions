int bowlingScore(string str) {
    int score = 0;
    int roll1, roll2;

    for (int frame = 0; frame < 10; frame++) {
        if (str[0] == '/') {
            string spareStr = "";
            for (char c : str.substr(1)) {
                if (c != '/') {
                    spareStr += c;
                } else {
                    break;
                }
            }
            score += 10 + calculateScore(spareStr);
            str.erase(0, spareStr.length() + 1);
        } else if (str[0] == 'X') {
            score += 10;
            str.erase(0, 2);
        } else {
            roll1 = str[0] - '0';
            str.erase(0, 1);

            if (str[0] == '/') {
                score += roll1 + 10;
                str.erase(0, 1);
            } else if (str[0] == 'X') {
                score += roll1 + 10;
                str.erase(0, 2);
            } else {
                roll2 = str[0] - '0';
                str.erase(0, 1);
                score += roll1 + roll2;
            }
        }
    }

    return score;
}

int calculateScore(string str) {
    int score = 0;
    for (char c : str) {
        if (c == '/') {
            break;
        } else {
            score += c - '0';
        }
    }
    return score;
}