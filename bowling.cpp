int calculateBowlingScore(const string& bowls) {
    int score = 0;
    int frame = 1;
    int bowlIndex = 0;

    for (int i = 0; i < bowls.size(); ++i) {
        if (bowls[i] == 'X') {
            score += 10;
            if (frame < 10) {
                score += (bowls[i + 1] == 'X' ? 10 : (bowls[i + 1] == '/' ? 10 - (bowls[i + 2] - '0') : bowls[i + 1] - '0') + (bowls[i + 2] == '/' ? 10 - (bowls[i + 3] - '0') : bowls[i + 2] == 'X' ? 10 : bowls[i + 2] - '0'));
            }
            if (frame == 10) {
                score += (bowls[i + 1] == 'X' ? 10 : (bowls[i + 1] == '/' ? 10 - (bowls[i + 2] - '0') : bowls[i + 1] - '0') + (bowls[i + 2] == 'X' ? 10 : bowls[i + 2] == '/' ? 10 - (bowls[i + 3] - '0') : bowls[i + 2] - '0'));
            }
            bowlIndex++;
        } else if (bowls[i] == '/') {
            score += 10 - (bowls[i - 1] - '0');
            score += (bowls[i + 1] == 'X' ? 10 : bowls[i + 1] - '0');
            bowlIndex++;
        } else if (bowls[i] == '-') {
            bowlIndex++;
        } else {
            score += bowls[i] - '0';
            if (frame < 10 && bowlIndex % 2 == 1) {
                if (bowls[i - 1] == '/') {
                    score += bowls[i] - '0';
                }
            }
            if (frame == 10 && bowlIndex % 2 == 1) {
                if (bowls[i - 1] == 'X' || bowls[i - 1] == '/') {
                    score += bowls[i] - '0';
                }
            }
            bowlIndex++;
        }

        if (bowlIndex % 2 == 0) {
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