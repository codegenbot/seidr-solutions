```cpp
int bowlingScore(const std::string& s) {
    if (s.empty()) {
        throw std::invalid_argument("No input provided");
    }
    int score = 0;
    int prevRoll = 0;
    bool isStrike = false;

    for (char c : s) { 
        switch(c) {
            case 'X':
                score += 30;
                isStrike = true;
                break;
            case '/':
                if (isStrike) {
                    score += prevRoll * 2;
                    isStrike = false;
                } else {
                    int roll1, roll2;
                    char nextChar = s.find('/') + 1; 
                    if(nextChar != ' ') {
                        roll1 = nextChar - '0';
                        score += roll1;
                    }
                }
                break;
            case ' ':
                if(s.length() > i) { 
                    int roll1 = prevChar - '0';
                    if(isStrike) {
                        score += roll1 + prevRoll * 2;
                        isStrike = false;
                    } else {
                        score += roll1;
                    }
                    prevRoll = roll1;
                }
                break;
            default:
                int roll = c - '0'; 
                if (isStrike) {
                    score += roll + prevRoll * 2;
                    isStrike = false;
                } else {
                    score += roll;
                }
                prevRoll = roll;
        }
    }

    return score;
}