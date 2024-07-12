int bowlingScore(string input) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    map<char, int> value = {{'X', 10}, {'/', 10}, {'-', 0}};

    for (char c : input) {
        if (isdigit(c)) {
            score += c - '0';
            if (ball == 0) {
                ball = 1;
            } else {
                ball = 0;
                frame++;
            }
        } else {
            score += value[c];
            if (c == 'X' || ball == 1) {
                frame++;
            }
            ball = (c == 'X') ? 0 : 1;
        }

        if (frame == 11) {
            break;
        }
    }

    return score;
}

int main() {
    string input;
    cin >> input;
    cout << bowlingScore(input) << endl;
    return 0;
}