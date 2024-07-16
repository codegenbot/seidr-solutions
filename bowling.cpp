int calculateBowlingScore(string bowls) {
    int score = 0;
    int frame = 0;
    for (int i = 0; i < bowls.size(); i++) {
        if (frame == 10) break;
        if (bowls[i] == 'X') {
            score += 10;
            score += (bowls[i + 2] == 'X') ? 10 : (isdigit(bowls[i + 1]) ? bowls[i + 1] - '0' : 10);
            score += (isdigit(bowls[i + 1]) && bowls[i + 2] == '/') ? 10 : (isdigit(bowls[i + 2]) ? bowls[i + 2] - '0' : 10);
            frame++;
        } else if (isdigit(bowls[i])) {
            score += bowls[i] - '0';
            if (isdigit(bowls[i + 1]) && bowls[i + 2] == '/') {
                score += 10 - (bowls[i] - '0');
            } else if (bowls[i + 1] == '/') {
                score += 10;
            } else if (isdigit(bowls[i + 1])) {
                score += bowls[i + 1] - '0';
            }
            frame++;
            i++;
        } else if (bowls[i] == '/') {
            score += 10 - (bowls[i - 1] - '0');
        }
    }
    return score;
}

int main() {
    string bowls;
    cin >> bowls;
    int score = calculateBowlingScore(bowls);
    cout << score << endl;
    return 0;
}