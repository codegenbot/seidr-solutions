```cpp
int bowlingScore(string s) {
    int score = 0;
    int currentRoll1 = 0;
    int currentRoll2 = 0;
    bool strike = false;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            if (currentRoll1 + currentRoll2 < 10) {
                score += 10 - (currentRoll1 + currentRoll2);
            }
            currentRoll1 = 0;
            currentRoll2 = 0;
            strike = false;
        } else if (s[i] == 'X') {
            score += 10;
            currentRoll1 = 0;
            currentRoll2 = 0;
            strike = true;
        } else {
            if (!strike) {
                currentRoll1++;
            } else {
                currentRoll2++;
            }
        }
    }

    if (!strike) {
        if (currentRoll1 + currentRoll2 == 10) {
            score += 10;
        } else if (currentRoll1 > 0 && currentRoll2 > 0) {
            score += currentRoll1 + currentRoll2;
        } else if (currentRoll1 > 0) {
            score += currentRoll1 + currentRoll2;
        }
    }

    return score;
}

int main() { return bowlingScore("XXX/"); }