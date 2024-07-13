int scoreOfBowlingRound(const string& bowls) {
    int score = 0;
    int frame = 0;
    int frameIndex = 0;
    
    while (frame < 10) {
        if (bowls[frameIndex] == 'X') {
            score += 10;
            score += (bowls[frameIndex + 1] == 'X') ? 10 : (bowls[frameIndex + 2] == '/') ? 10 : (bowls[frameIndex + 1] == '-') ? 0 : (bowls[frameIndex + 1] - '0');
            score += (bowls[frameIndex + 2] == 'X') ? 10 : (bowls[frameIndex + 2] == '/') ? (10 - (bowls[frameIndex + 1] - '0')) : (bowls[frameIndex + 2] == '-') ? 0 : (bowls[frameIndex + 2] - '0');
            frameIndex += 1;
        } else if (bowls[frameIndex + 1] == '/') {
            score += 10;
            score += (bowls[frameIndex + 2] == 'X') ? 10 : (bowls[frameIndex + 2] == '-') ? 0 : (bowls[frameIndex + 2] - '0');
            frameIndex += 2;
        } else {
            if (bowls[frameIndex + 1] != '-') {
                score += (bowls[frameIndex] - '0') + (bowls[frameIndex + 1] - '0');
            } else {
                score += (bowls[frameIndex] - '0');
            }
            frameIndex += 2;
        }
        frame++;
    }
    
    return score;
}

int main() {
    string bowls;
    cin >> bowls;
    cout << scoreOfBowlingRound(bowls) << endl;
    
    return 0;
}