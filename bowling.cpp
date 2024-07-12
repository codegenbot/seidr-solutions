int scoreOfBowlingRound(string s) {
    int score = 0;
    int frame = 0;
    int rolls = 0;
    vector<int> points;

    for (char c : s) {
        if (c == 'X') {
            points.push_back(10);
            rolls++;
            if (rolls % 2 == 0) {
                frame++;
            }
        } else if (c == '/') {
            points.push_back(10 - points.back());
        } else if (c == '-') {
            points.push_back(0);
        } else {
            points.push_back(c - '0');
        }

        rolls++;
        if (rolls % 2 == 0) {
            frame++;
        }

        if (frame == 10) {
            break;
        }
    }

    for (int i = 0; i < 10; i++) {
        if (points[i * 2] == 10) {
            score += 10 + points[i * 2 + 1] + points[i * 2 + 2];
        } else if (points[i * 2] + points[i * 2 + 1] == 10) {
            score += 10 + points[i * 2 + 2];
        } else {
            score += points[i * 2] + points[i * 2 + 1];
        }
    }

    return score;
}

int main() {
    string s;
    cin >> s;
    cout << scoreOfBowlingRound(s) << endl;
    return 0;
}