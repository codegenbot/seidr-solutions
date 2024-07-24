int calculateBowlingScore(const string& bowls) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    for (char ch : bowls) {
        if (ch == 'X') {
            score += 10;
            if (frame < 10) {
                score += (bowls[ball + 1] == 'X' ? 10 : (isdigit(bowls[ball + 1]) ? bowls[ball + 1] - '0' : 10));
                score += (bowls[ball + 2] == 'X' ? 10 : (isdigit(bowls[ball + 2]) ? bowls[ball + 2] - '0' : 10));
            }
            ball++;
            frame++;
        } else if (ch == '/') {
            score += 10 - (isdigit(bowls[ball - 1]) ? bowls[ball - 1] - '0' : 0);
            score += (bowls[ball + 1] == 'X' ? 10 : (isdigit(bowls[ball + 1]) ? bowls[ball + 1] - '0' : 10));
            ball += 2;
            frame++;
        } else if (isdigit(ch)) {
            score += ch - '0';
            ball++;
            if (isdigit(bowls[ball - 1])) {
                score += bowls[ball - 1] - '0';
                if (frame < 10 && bowls[ball] == '/') {
                    score += 10 - (bowls[ball - 1] - '0');
                }
            }
        }
    }
    return score;
}

int main() {
    string bowls;
    cin >> bowls;
    cout << calculateBowlingScore(bowls) << endl;
    return 0;
}