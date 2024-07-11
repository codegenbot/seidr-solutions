int calculateBowlingScore(const string& bowls) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    bool spare = false;

    for (char c : bowls) {
        if (c == 'X') {
            score += 10;
            if (frame < 10) {
                score += (bowls[ball + 1] == 'X' ? 10 : (bowls[ball + 1] == '/' ? 10 -  (bowls[ball + 2] - '0') : bowls[ball + 1] - '0'));
                score += (bowls[ball + 2] == 'X' ? 10 : bowls[ball + 2] == '/' ? 10 -  (bowls[ball + 3] - '0') : bowls[ball + 2] - '0');
            }
            ball++;
            if (!spare) frame++;
        } else if (c == '/') {
            score += 10 - (bowls[ball - 1] - '0');
            if (frame < 10) {
                score += bowls[ball + 1] == 'X' ? 10 : bowls[ball + 1] - '0';
            }
            frame++;
            spare = true;
        } else if (c == '-') {
            if (frame < 10) frame++;
        } else {
            score += c - '0';
            if (!spare) {
                if (frame % 2 == 0) frame++;
                else ball++;
            } else {
                spare = false;
                frame++;
            }
        }
    }

    return score;
}

int main() {
    string input;
    cin >> input;
    cout << calculateBowlingScore(input) << endl;
    return 0;
}