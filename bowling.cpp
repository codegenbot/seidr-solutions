```cpp
int bowlingScore(const std::string& input) {
    int score = 0;
    int currentRoll = 0;
    int frame = 1;

    for (char c : input) {
        if (c == 'X') {
            score += 10 + (currentRoll > 0 ? currentRoll : 10);
            currentRoll = 0;
            frame++;
        } else if (c == '/') {
            score += 10 - currentRoll;
            currentRoll = 0;
            frame++;
        } else if (c >= '0' && c <= '9') {
            int roll = c - '0';
            if (currentRoll > 0) {
                score += roll;
            } else {
                currentRoll = roll;
            }
        } else if (c == '-') {
            currentRoll = 0;
            frame++;
        } else if (c == 'T') {
            int roll = 10;
            while (roll-- > 0) {
                c = input[input.find('/') + 1];
                if (c >= '0' && c <= '9') {
                    roll -= c - '0';
                } else if (c == '/') {
                    break;
                }
            }
            score += 10;
            frame++;
        }
    }

    return score;
}

int main() {
    return bowlingScore("X/XXX/X-4-8/2X6/T50");
}