#include <iostream>
#include <string>

int scoreOfRound(const std::string& round) {
    int score = 0;
    int frame = 1;
    int bowlIndex = 0;
    
    for (int i = 0; i < round.length(); i++) {
        char bowl = round[i];
        
        if (bowl == 'X') {
            score += 10;
            if (frame < 10) {
                score += (round[i+1] == 'X') ? 10 : (isdigit(round[i+1]) ? round[i+1] - '0' : 0);
                score += (round[i+2] == 'X') ? 10 : (isdigit(round[i+2]) ? round[i+2] - '0' : 0);
            }
            frame++;
        } else if (isdigit(bowl)) {
            score += bowl - '0';
            if (frame < 10 && bowlIndex == 0 && bowl + round[i+1] == 'X') {
                score += 10;
            }
            bowlIndex = (bowlIndex + 1) % 2;
            if (bowlIndex == 0) {
                frame++;
            }
        } else if (bowl == '/') {
            score += 10 - (round[i-1] - '0');
            if (frame < 10) {
                score += (round[i+1] == 'X') ? 10 : (isdigit(round[i+1]) ? round[i+1] - '0' : 0);
            }
            frame++;
            bowlIndex = 0;
        } else if (bowl == '-') {
            if (frame < 10) {
                score += (round[i+1] == 'X') ? 10 : (isdigit(round[i+1]) ? round[i+1] - '0' : 0);
            }
            bowlIndex = (bowlIndex + 1) % 2;
            if (bowlIndex == 0) {
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