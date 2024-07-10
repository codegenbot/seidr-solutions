int bowlingScore(std::string s) {
    int score = 0;
    int currentFrame = 1;

    for (char c : s) {
        if (c == 'X') { // Strike
            score += 10 + (currentFrame < 3 ? 10 : 0);
            if (currentFrame <= 2) currentFrame = min(currentFrame+1, 3); 
        } else if (c == '/') { // Spare
            score += 10;
            currentFrame++;
        } else {
            int pins = c - '0';
            if (currentFrame < 3) {
                if (pins + myRolls(s, currentFrame) >= 10) {
                    score += 10; // Spare
                } else {
                    score += pins + myRolls(s, currentFrame);
                }
                currentFrame++;
            } else {
                score += pins;
                currentFrame++;
            }
        }
    }

    return score;
}

int myRolls(std::string s, int frame) {
    int rolls = 0;
    for (int i = 0; i < frame*2+1; i++) {
        if (i >= s.length()) break;
        if (s[i] == 'X') rolls += 10;
        else if (s[i] == '/') return 10-rolls;
        else rolls += s[i]-'0';
    }
    return 0;
}

int main() {
    std::cout << bowlingScore("X|---5-8-|X||25--|-1-3-4-6-8-9-7"); 
    return 0;
}