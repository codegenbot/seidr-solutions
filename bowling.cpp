#include <iostream>
#include <string>

int scoreOfRound(const std::string& round) {
    int score = 0;
    int frame = 0;
    int rolls = 0;
    
    for (char c : round) {
        if (c == 'X') {
            score += 10;
            if (frame < 9) {
                score += (round[rolls + 1] == 'X') ? 10 + ((round[rolls + 2] == 'X') ? 10 : (round[rolls + 2] - '0')) : (round[rolls + 2] == '/' ? 10 : (round[rolls + 1] - '0') + (round[rolls + 2] - '0'));
                rolls++;
            }
            frame++;
        } else if (c == '/') {
            score += 10 - (round[rolls - 1] - '0');
            score += (frame < 9) ? (round[rolls + 1] == 'X' ? 10 : (round[rolls + 1] - '0')) : 0;
            frame++;
        } else {
            score += c - '0';
            if (frame < 9 && rolls % 2 == 1 && c != '-') {
                score += (round[rolls - 1] == '/' ? 10 - (round[rolls - 2] - '0') : 0);
                frame++;
            }
        }
        rolls++;
    }
    
    return score;
}

int main() {
    std::string round;
    std::getline(std::cin, round);
    
    int score = scoreOfRound(round);
    
    std::cout << score << std::endl;
    
    return 0;
}