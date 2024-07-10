```
int bowlingScore(std::string input) {
    int score = 0;
    bool firstInFrame = true;
    bool previousStrikeOrSpare = false;
    for (char c : input) {
        if (c == '|') {
            if (!firstInFrame && !previousStrikeOrSpare) {
                if (score >= 10) {
                    score += 10;
                } else {
                    score += 10 - score;
                }
            }
            firstInFrame = true;
            previousStrikeOrSpare = false;
        } else if (c == 'X') {
            score += 10;
            score += 10; // add the next two rolls to the strike
            firstInFrame = false;
            previousStrikeOrSpare = true;
        } else if (isdigit(c)) {
            int pins = c - '0';
            if (!firstInFrame && previousStrikeOrSpare) { 
                score += pins + 10; // add the next roll to the spare
                firstInFrame = false;
                previousStrikeOrSpare = true;
            } else {
                score += pins;
                firstInFrame = false;
                previousStrikeOrSpare = false;
            }
        } else if (c == '-') {
            firstInFrame = true;
        }
    }
    return score;
}

int main() {
    std::cout << bowlingScore("X|---5-8-|X||25--|-1-3-4-6-8-9-7");
}