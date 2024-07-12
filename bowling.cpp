using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    int rollsLeftInFrame = 2;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            if (currentFrame > 9) return -1;
            if (rollsLeftInFrame == 2 && s[i+1] != 'X') {
                score += 10 - (s[i-1] - '0');
            }
            currentFrame++;
            rollsLeftInFrame = 2;
        } else if (s[i] == 'X') {
            score += 30;
            currentFrame++;
            rollsLeftInFrame--;
        } else {
            int currentRoll = s[i] - '0';
            if (currentRoll + rollsLeftInFrame <= 10) {
                score += currentRoll + rollsLeftInFrame;
                rollsLeftInFrame = 0;
            } else {
                score += 10;
                rollsLeftInFrame = 0;
                currentFrame++;
            }
        }
    }

    return score;
}