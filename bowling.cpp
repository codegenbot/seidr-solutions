int score(string input) {
    int totalScore = 0;
    int frame = 1;
    int ball = 0;
    map<char, int> value = { {'X', 10}, {'/', 10}, {'-', 0} };

    for (char c : input) {
        if (isdigit(c)) {
            totalScore += c - '0';
            ball++;
        } else {
            totalScore += value[c];
            if (c == 'X' || ball == 2) {
                ball = 0;
                frame++;
            } else {
                ball++;
            }
        }

        if (frame > 10) {
            break;
        }
    }

    return totalScore;
}

int main() {
    string input;
    cin >> input;
    cout << score(input) << endl;
    return 0;
}