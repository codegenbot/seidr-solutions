int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 30;
            i++;
        } else if (isdigit(s[i])) {
            int frame = 0;
            while (i < s.length() && (isdigit(s[i]) || s[i] == '/')) {
                if (s[i] == '/') {
                    frame = min(10, stoi(string(1, s[i-1])) + 10);
                    i++;
                    break;
                } else {
                    int pins = stoi(string(1, s[i]));
                    frame += pins;
                    i++;
                }
            }
            score += (frame > 10 ? 10 : frame) * 10;
        }
    }
    return score;
}