using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            frame++;
        } else if (c == '/') {
            score += 10;
            frame++;
        } else {
            int pins = c - '0';
            score += pins;
            if (frame < 9 && s[frame * 2 + 1] != 'X') {
                pins += s[frame * 2 + 1] - '0';
            }
            if (pins == 10) {
                frame++;
            } else {
                score += pins;
                frame++;
            }
        }
    }
    return score;