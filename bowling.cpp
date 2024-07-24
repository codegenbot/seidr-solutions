int score(string input) {
    int frame = 0, totalScore = 0;
    vector<int> scores(12);
    for (char bowl : input) {
        if (bowl == 'X') {
            scores[frame] = 10;
            frame++;
        } else if (bowl == '/') {
            scores[frame] = 10 - scores[frame - 1];
            frame++;
        } else if (bowl == '-') {
            scores[frame] = 0;
            frame++;
        } else {
            scores[frame] = bowl - '0';
            if (frame % 2 == 1 && bowl != '-') {
                if (scores[frame - 1] + scores[frame] > 10) return -1;
            }
            if (frame % 2 == 1) frame++;
        }
    }
    for (int i = 0; i < 10; i++) {
        if (scores[i] == 10) {
            totalScore += 10 + scores[i + 1] + scores[i + 2];
        } else if (scores[i] + scores[i + 1] == 10) {
            totalScore += 10 + scores[i + 2];
            i++;
        } else {
            totalScore += scores[i] + scores[i + 1];
            i++;
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