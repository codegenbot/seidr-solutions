int calculateBowlingScore(string bowls) {
    int score = 0;
    int frame = 0;
    bool firstTryInFrame = true;
    for (char bowl : bowls) {
        if (frame == 10) break;
        if (bowl == 'X') {
            score += 10;
            if (frame < 9) {
                score += (bowls[frame + 1] == 'X') ? 10 : (bowls[frame + 1] - '0');
                score += (bowls[frame + 2] == 'X') ? 10 : ((bowls[frame + 2] == '/') ? 10 - (bowls[frame + 1] - '0') : (bowls[frame + 2] - '0'));
            }
            frame++;
            firstTryInFrame = true;
        } else if (bowl == '/') {
            score += 10 - (bowls[frame - 1] - '0');
        } else {
            score += bowl - '0';
            if (!firstTryInFrame) {
                if (bowls[frame - 1] == '/') {
                    score += bowl - '0';
                }
            }
            firstTryInFrame = !firstTryInFrame;
            if (firstTryInFrame) {
                frame++;
            }
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