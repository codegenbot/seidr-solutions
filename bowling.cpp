int calculateBowlingScore(const string& bowls) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    for (char ch : bowls) {
        if (ch == 'X') {
            score += 10;
            if (frame < 10) {
                score += (bowls[ball + 1] == 'X') ? 10 : (isdigit(bowls[ball + 1]) ? bowls[ball + 1] - '0' : 0);
                score += (bowls[ball + 2] == 'X') ? 10 : (bowls[ball + 2] == '/' ? 10 - (bowls[ball + 1] - '0') : (isdigit(bowls[ball + 2]) ? bowls[ball + 2] - '0' : 0));
            }
            ball++;
        } else if (ch == '/') {
            score += 10 - (bowls[ball - 1] - '0');
            score += (bowls[ball + 1] == 'X') ? 10 : (isdigit(bowls[ball + 1]) ? bowls[ball + 1] - '0' : 0);
            ball += 2;
        } else if (isdigit(ch)) {
            score += ch - '0';
            if (frame < 10 && ball % 2 == 1 && ch != '0' && bowls[ball - 1] == '/') {
                score += ch - '0';
            }
            ball++;
        }
        if (ball % 2 == 0) {
            frame++;
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