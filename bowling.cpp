int calculateBowlingScore(const string &bowls) {
    int score = 0;
    int frame = 0;
    int throws = 0;
    vector<int> frameScores(10, 0);

    for (char bowl : bowls) {
        if (bowl == 'X') {
            score += 10;
            if (frame < 9) {
                score += frameScores[frame + 1] + frameScores[frame + 2];
                frameScores[frame++] = 10;
            } else {
                throws++;
            }
            throws++;
        } else if (bowl == '/') {
            score += 10 - frameScores[frame - 1];
            frameScores[frame++] = 10 - frameScores[frame - 1];
            throws++;
        } else if (bowl == '-') {
            frameScores[frame++] = 0;
        } else {
            score += bowl - '0';
            frameScores[frame] += bowl - '0';
            if (frame < 9 && frameScores[frame] == 10) {
                score += bowls[throws + 1] - '0';
            }
            throws++;
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