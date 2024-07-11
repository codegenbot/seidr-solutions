int score(const string& input) {
    int totalScore = 0;
    int frame = 0;
    int rolls = 0;
    vector<int> frameScores(10, 0);

    for (char c : input) {
        if (c == 'X') {
            frameScores[frame] = 10;
            frame++;
            rolls = 0;
        } else if (c == '/') {
            frameScores[frame] = 10 - frameScores[frame];
            frame++;
            rolls = 0;
        } else if (c == '-') {
            rolls++;
            if (rolls == 2) {
                frame++;
                rolls = 0;
            }
        } else {
            frameScores[frame] += c - '0';
            rolls++;
            if (rolls == 2) {
                frame++;
                rolls = 0;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        totalScore += frameScores[i];
        if (i < 9 && frameScores[i] == 10) {
            totalScore += frameScores[i + 1];
            if (frameScores[i + 1] == 10) {
                totalScore += frameScores[i + 2];
            }
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