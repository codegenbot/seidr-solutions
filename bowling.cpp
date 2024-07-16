```c++
int bowlingScore(const std::string& s) {
    int score = 0;
    int currentRoll = 0;
    int currentFrame = 1;

    for (int i = 0; i < s.size(); ++i) {
        char c = s[i];
        
        if (c == 'X') {
            score += 10; // strike, add the bonus
            if (currentFrame < 10) {
                currentFrame++;
            }
        } else if (c == '/') {
            score += currentRoll + 10; // add the roll and the bonus
            if (s.find('/', i+1) < s.size()-1) { // check for next frame
                currentFrame = 2;
            } else {
                currentFrame++;
            }
            currentRoll = 0;
        } else {
            if (currentRoll > 9) { 
                int firstRoll = c - '0';
                score += firstRoll + 10; 
                currentRoll = 0;
                if (currentFrame < 10) {
                    currentFrame++;
                }
            } else {
                currentRoll *= 10;
                currentRoll += c - '0';
            }
        }
    }

    return score;
}