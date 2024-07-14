int bowlingScore(string &input) {
    int score = 0;
    int rollCount = 0;
    
    for (char c : input) {
        if (c == '/') {
            score += 10 - (10 - rollCount);
            rollCount = 0;
        } else if (c >= 'X' || c >= 'x') {
            score += 10 + rollCount;
            rollCount = 0;
        } else {
            int rollsInFrame = 1;
            while (c != '/' && c <= '9') {
                rollsInFrame *= 10;
                c = input[input.find(c) + 1];
            }
            if (c == 'X' || c == 'x') {
                score += 10 + rollCount;
                rollCount = 0;
            } else {
                int bonus = stoi(string(1, c));
                score += bonus;
                rollsInFrame -= bonus;
                while (rollsInFrame-- > 0) {
                    if (input[input.find(c) + 1] == 'X' || input[input.find(c) + 1] == 'x') {
                        score += 10;
                        break;
                    }
                    c = input[input.find(c) + 1];
                    score++;
                }
            }
        }
    }
    
    if (rollCount > 0)
        score += rollCount;
    
    return score;
}