```cpp
int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    int rollCount = 0;

    for(int i = 0; i < s.length(); i++) {
        char c = s[i];
        if(c == '/') {
            if(currentRoll + max(0, min(10 - rollCount, currentRoll)) > 10)
                score += 10 + max(0, currentRoll - 10);
            else
                score += currentRoll + max(0, min(10 - rollCount, currentRoll));
            currentRoll = 0;
            rollCount++;
        } else if (isdigit(c)) {
            currentRoll *= 10;
            currentRoll += c - '0';
        }
    }

    if(currentRoll > 0) score += currentRoll;

    return score;
}