int calculateBowlingScore(const string& bowls) {
    int score = 0;
    int frame = 1;
    int roll = 0;
    vector<int> points(22, 0);

    for (char c : bowls) {
        if (c == 'X') {
            points[roll] = 10;
            points[roll + 1] = 0;
            roll += 2;
            frame++;
        } else if (c == '/') {
            points[roll] = 10 - points[roll - 1];
            roll++;
            frame++;
        } else if (c == '-') {
            points[roll] = 0;
            roll++;
        } else {
            points[roll] = c - '0';
            roll++;
            if (frame % 2 == 0) {
                frame++;
            }
        }
    }

    for (int i = 0; i < 20; i += 2) {
        if (points[i] == 10) {
            score += 10 + points[i + 2] + points[i + 4];
        } else if (points[i] + points[i + 1] == 10) {
            score += 10 + points[i + 2];
        } else {
            score += points[i] + points[i + 1];
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