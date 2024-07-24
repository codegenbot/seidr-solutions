int calcScore(const string& bowls) {
    int score = 0;
    int frame = 0;
    int bowlIndex = 0;

    while (frame < 10) {
        if (bowls[bowlIndex] == 'X') {
            score += 10;
            score += (bowls[bowlIndex + 1] == 'X') ? 10 : (bowls[bowlIndex + 1] == '/') ? 10 - (bowls[bowlIndex + 2] - '0') : bowls[bowlIndex + 1] - '0';
            score += (bowls[bowlIndex + 2] == 'X') ? 10 : (bowls[bowlIndex + 2] == '/') ? 10 - (bowls[bowlIndex + 3] - '0') : bowls[bowlIndex + 2] - '0';
            bowlIndex++;
        } else if (bowls[bowlIndex + 1] == '/') {
            score += 10;
            score += (bowls[bowlIndex + 2] == 'X') ? 10 : bowls[bowlIndex + 2] - '0';
            bowlIndex += 2;
        } else {
            score += (bowls[bowlIndex] == '-') ? 0 : bowls[bowlIndex] - '0';
            score += (bowls[bowlIndex + 1] == '-') ? 0 : bowls[bowlIndex + 1] - '0';
            bowlIndex += 2;
        }

        frame++;
    }

    return score;
}

int main() {
    string bowls;
    cin >> bowls;
    cout << calcScore(bowls) << endl;
    return 0;
}