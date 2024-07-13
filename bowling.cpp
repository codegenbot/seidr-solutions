int score(string bowls) {
    int total_score = 0;
    int frame = 1;
    int ball = 0;
    int frame_score = 0;
    vector<int> scores;

    for (char c : bowls) {
        if (c == 'X') {
            scores.push_back(10);
            frame++;
        } else if (c == '/') {
            scores.push_back(10 - scores.back());
            frame++;
        } else if (c == '-') {
            scores.push_back(0);
            ball++;
        } else {
            scores.push_back(c - '0');
            ball++;
        }

        if (frame <= 10 && (c == 'X' || ball == 2)) {
            frame_score = scores[frame * 2 - 2] + scores[frame * 2 - 1];
            if (frame_score == 10 && frame < 10) {
                frame_score += scores[frame * 2 + 1];
            }
            total_score += frame_score;
            ball = 0;
        }
    }

    return total_score;
}

int main() {
    string bowls;
    cin >> bowls;
    cout << score(bowls) << endl;
    return 0;
}