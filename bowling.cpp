#include <iostream>
#include <string>

int getScore(const std::string& round) {
    int score = 0;
    int frame = 1;
    int bowl = 0;
    int bonus = 0;
    
    for (char c : round) {
        if (frame > 10) {
            break;
        }
        
        if (c == 'X') {
            score += 10;
            if (frame < 10) {
                bonus += 2;
            }
            else {
                bonus += 1;
            }
            bowl++;
            if (bowl == 1) {
                frame++;
                bowl = 0;
            }
        }
        else if (c == '/') {
            score += 10 - (round[bowl - 1] - '0');
            if (frame < 10) {
                bonus += 1;
            }
            bowl++;
            if (bowl == 1) {
                frame++;
                bowl = 0;
            }
        }
        else if (c == '-') {
            // do nothing
        }
        else {
            score += c - '0';
            if (frame < 10) {
                bonus += 1;
            }
            bowl++;
            if (bowl == 2) {
                frame++;
                bowl = 0;
            }
        }
        
        if (bonus > 0) {
            score += c - '0';
            bonus--;
        }
    }
    
    return score;
}

int main() {
    std::string round;
    std::cin >> round;
    
    int score = getScore(round);
    std::cout << score << std::endl;
    
    return 0;
}