int currentRoll = 0;
int nextTwoRolls = 0;

int bowlingScore(std::string s) {
    int score = 0;
    for (char c : s) {
        if (c == '/') {
            score += currentRoll;
            currentRoll = 0;
        }
        std::string frame;
        frame += c;
        if (c == 'X') { 
            score += 10; 
            currentRoll = 10;
            nextTwoRolls = 10;
        } else if (c == '-') { 
            score += 10 - frame.length();
            currentRoll = 10 - frame.length();
            nextTwoRolls = 0;
        } else if (isdigit(c)) {
            int points = 0;
            int i = s.find(c) + 1;
            for (; isdigit(s[i]); i++) {
                points = points * 10 + (s[i] - '0');
            }
            score += currentRoll + points; 
            currentRoll = points;
            if (frame.length() == 2) {
                nextTwoRolls = points;
            } else {
                nextTwoRolls = 0;
            }
        } 
    }
    return score;
}

int main() {
    return bowlingScore("X/XXX/X-4-8/2X6/T50");
}