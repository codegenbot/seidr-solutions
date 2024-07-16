#include <string>

int bowlingScore(const std::string& s) {
    int score = 0;
    int currentRoll = 0;

    for (auto it = s.begin(); it != s.end(); ++it) {
        char c = *it;
        
        if (c == 'X') {
            score += 10 + 30; // strike, add the bonus
            currentRoll = 0;
        } else if (c == '/') {
            score += currentRoll + 10; // add the roll and the bonus
            currentRoll = 0;
        } else {
            if (currentRoll > 9) { 
                int firstRoll = c - '0';
                score += firstRoll + 10; 
                if (s.find('/', it-s.begin()) < s.size()-1) {
                    currentRoll = 10 - c;
                } else {
                    currentRoll = 20 - c;
                }
            } else {
                currentRoll *= 10;
                currentRoll += c - '0';
            }
        }
    }

    return score;
}

int main() {
    return bowlingScore("XXX/"); // replace with your input string
}