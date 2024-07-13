int bowlingScore(string s) {
    int score = 0;
    string frame;
    for (char c : s) {
        if (c == '/') {
            frame += '/';
            continue;
        }
        frame += c;
        if (c == 'X') {
            score += 10;
        } else if (c == '-') {
            continue;
        } else if (isdigit(c)) {
            int points = 0;
            for (; isdigit(s[s.find(c) + 1]); s.erase(s.find(c) + 1, 1)) {
                points = points * 10 + (s[s.find(c) + 1] - '0');
            }
            score += points;
        } else if (c == 'T') {
            score += 10 + (s[s.find(c) + 1] - '0' + s[s.find(c) + 2] - '0');
        }
    }
    return score;
}

int main() {
    return bowlingScore("X/XXX/X-4-8/2X6/T50");
}