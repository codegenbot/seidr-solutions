int bowlingScore(string &frames) {
    int score = 0;
    for (int i = 0; i < frames.size(); i++) {
        if (frames[i] == 'X') {
            score += 30;
            i++;
            if (i < frames.size() && (frames[i] == '/' || i == frames.size() - 1)) {
                score -= 10;
            }
        } else if (frames[i] == '/') {
            int j = i + 1;
            while (j < frames.size() && frames[j] != 'X') {
                j++;
            }
            if (j == frames.size()) {
                score += 10;
            } else {
                int bonus = 10 - (j - i);
                score += 10 + (bonus * (frames.substr(i, j - i).find('X') != string::npos));
            }
        } else {
            int count = 0;
            while (i < frames.size() && frames[i] != 'X' && frames[i] != '/') {
                if (frames[i] == '5') {
                    score += 15;
                    i++;
                    break;
                } else {
                    count += frames[i] - '0';
                    i++;
                }
            }
            if (count < 10) {
                score += count * 1;
            } else {
                score += 10 + (count - 10);
            }
        }
    }
    return score;
}