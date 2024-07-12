int scoreOfBowlingRound(const std::string& bowls) {
    int score = 0;
    int frame = 1;
    int balls = 0;
    int frameScore = 0;
    bool spare = false;
    
    for (char bowl : bowls) {
        if (bowl == 'X') {
            score += 10;
            if (frame < 10) {
                score += (balls < 2) ? 0 : (balls == 2) ? 10 : (balls == 4) ? 10 : 0;
            }
            balls = (balls < 2) ? balls + 2 : 0;
            frame++;
            continue;
        } else if (bowl == '/') {
            score += 10 - frameScore;
            if (frame < 10) {
                score += (balls < 2) ? 0 : 10;
            }
            balls = (balls % 2 == 0) ? balls + 1 : 0;
            frame++;
            frameScore = 0;
            spare = true;
            continue;
        } else if (bowl == '-') {
            frame++;
            continue;
        } else {
            int pins = bowl - '0';
            score += pins;
            frameScore += pins;
            if (spare) {
                score += pins;
                spare = false;
            }
            balls = (balls % 2 == 0) ? balls + 1 : balls + 2;
        }
    }
    
    return score;
}

int main() {
    std::string bowls;
    std::cin >> bowls;
    
    std::cout << scoreOfBowlingRound(bowls) << std::endl;
    
    return 0;
}