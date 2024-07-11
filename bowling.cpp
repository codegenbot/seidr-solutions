int score(const std::string& s) {
    int totalScore = 0;
    int frame = 1;
    int bowlIndex = 0;

    while (frame <= 10 && bowlIndex < s.size()) {
        if (s[bowlIndex] == 'X') {
            totalScore += 10;
            if (frame < 10) {
                totalScore += (s[bowlIndex + 1] == 'X') ? 10 : (isdigit(s[bowlIndex + 1]) ? (s[bowlIndex + 1] - '0') : 0);
                totalScore += (s[bowlIndex + 2] == 'X') ? 10 : (s[bowlIndex + 2] == '/' ? (10 - (s[bowlIndex + 1] - '0')) : (isdigit(s[bowlIndex + 2]) ? (s[bowlIndex + 2] - '0') : 0));
            }
            bowlIndex += 1;
            frame += 1;
        } else if (isdigit(s[bowlIndex])) {
            totalScore += (s[bowlIndex] - '0');
            if (isdigit(s[bowlIndex + 1])) {
                totalScore += (s[bowlIndex + 1] - '0');
                if (s[bowlIndex + 2] == '/') {
                    totalScore += (10 - (s[bowlIndex + 1] - '0'));
                }
            } else if (s[bowlIndex + 1] == '/') {
                totalScore += 10;
            }
            bowlIndex += 2;
            frame += 1;
        } else if (s[bowlIndex] == '-') {
            bowlIndex += 1;
            frame += 1;
        }
    }

    return totalScore;
}