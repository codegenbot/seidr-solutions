int bowlingScore(string bowls) {
    int score = 0;
    int frame = 1;
    int i = 0;
    while (frame <= 10 && i < bowls.size()) {
        if (bowls[i] == 'X') {
            score += 10;
            if (bowls[i + 1] == 'X') {
                score += 10;
                if (bowls[i + 2] == 'X') {
                    score += 10;
                } else {
                    score += (bowls[i + 2] - '0');
                }
            } else {
                if (bowls[i + 2] == '/') {
                    score += 10;
                } else {
                    score += (bowls[i + 1] - '0') + (bowls[i + 2] - '0');
                }
            }
            i++;
        } else if (bowls[i + 1] == '/') {
            score += 10;
            score += (bowls[i + 2] - '0');
            i += 2;
        } else {
            score += (bowls[i] - '0') + (bowls[i + 1] - '0');
            i += 2;
        }
        frame++;
    }
    return score;
}

int main() {
    string bowls;
    cin >> bowls;
    cout << bowlingScore(bowls) << endl;
    return 0;
}