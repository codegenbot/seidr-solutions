int bowlingScore(std::string s) {
    int score = 0;
    std::string frame;
    for (char c : s) {
        if (c == '/') {
            frame += '/';
            continue;
        }
        frame += c;
        if (c == 'X') {
            score += 10;
        } else if (c == '-') {
            score += 10 - (frame.length() - 1);
        } else if (isdigit(c)) {
            int points = 0;
            for (; isdigit(s.find(c) + 1); s.erase(s.find(c) + 1, 1)) {
                points = points * 10 + (s[s.find(c) + 1] - '0');
            }
            score += points;
        } else if (c == 'T') {
            int points = 10;
            for (int i = 2; isdigit(s[i]); i++) {
                points = points + (s[i] - '0');
            }
            score += points;
        }
    }
    return score;
}

int main() {
    return bowlingScore("X/XXX/X-4-8/2X6/T50");
}