#include <iostream>
#include <string>

int calculateScore(const std::string& input) {
    int score = 0;
    int frame = 1;
    int roll = 0;
    bool spare = false;
    
    for (char c : input) {
        if (c == 'X') {
            score += 10;
            if (frame < 10) {
                score += 10;
                roll++;
            }
            frame++;
        } else if (c == '/') {
            score += 10 - (input[roll-1] - '0');
            if (frame < 10) {
                score += 10 - (input[roll-1] - '0');
                roll++;
            }
            frame++;
            spare = true;
        } else if (c == '-') {
            roll++;
        } else {
            score += c - '0';
            if (spare) {
                score += c - '0';
                spare = false;
            }
            roll++;
            if (roll % 2 == 0) {
                frame++;
            }
        }
    }
    
    return score;
}

int main() {
    std::string input;
    std::cin >> input;
    
    int score = calculateScore(input);
    std::cout << score << std::endl;
    
    return 0;
}