#include <iostream>
#include <string>

int scoreOfRound(const std::string& round) {
    int score = 0;
    int frame = 1;
    int rolls = 0;
    
    for (char c : round) {
        if (c == 'X') {
            score += 10;
            if (frame < 10) {
                score += 10;
                rolls++;
            }
            frame++;
        } else if (c == '/') {
            score += 10 - (round[rolls - 1] - '0');
            if (frame < 10) {
                score += 10 - (round[rolls - 1] - '0');
                rolls++;
            }
            frame++;
        } else if (c == '-') {
            rolls++;
        } else {
            score += c - '0';
            rolls++;
            if (rolls % 2 == 0) {
                frame++;
            }
        }
    }
    
    return score;
}

int main() {
    std::string round;
    std::cin >> round;
    
    int score = scoreOfRound(round);
    std::cout << score << std::endl;
    
    return 0;
}