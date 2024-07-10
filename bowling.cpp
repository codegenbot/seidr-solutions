```cpp
int rollCount = 0;
int roll(int pins) {
    if (rollCount == 1 || rollCount > 2) {
        return pins;
    }
    rollCount++;
    if (pins + roll(0) >= 10) {
        return 10;
    }
    return pins + roll(0);
}

int bowlingScore(const std::string& input) {
    int score = 0;
    for (char c : input) {
        if (c == '/') {
            score += roll(0);
            rollCount = 0;
        } else if ('1' <= c && c <= '9') {
            rollCount *= 10 + (c - '0');
        }
    }
    score += roll(0);
    return score;
}

int main() {
    std::string input; 
    int result = bowlingScore(input);
    return 0;
}