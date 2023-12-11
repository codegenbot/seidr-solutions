#include <iostream>
#include <string>

int getBowlValue(char bowl) {
    if (bowl == 'X') {
        return 10;
    } else if (bowl == '/') {
        return 10;
    } else if (bowl == '-') {
        return 0;
    } else {
        return bowl - '0';
    }
}

int bowlingScore(std::string round) {
    int score = 0;
    int frame = 1;
    int bowl = 0;
    
    for (int i = 0; i < round.size(); i++) {
        if (frame > 10) {
            break;
        }
        
        if (round[i] == 'X') {
            score += getBowlValue(round[i]);
            bowl = 0;  // reset bowl for next frame
            frame++;
        } else if (round[i] == '/') {
            score += 10 - getBowlValue(round[i-1]);  // add spare bonus
            bowl = 0;  // reset bowl for next frame
            frame++;
        } else if (round[i] == '-') {
            // do nothing, just skip this bowl
        } else {
            score += getBowlValue(round[i]);
            
            if (bowl == 0) {
                bowl = 1;
            } else if (bowl == 1) {
                score += getBowlValue(round[i]);
                bowl = 0;  // reset bowl for next frame
                frame++;
            }
        }
    }
    
    return score;
}

int main() {
    std::string round;
    std::cin >> round;
    std::cout << bowlingScore(round) << std::endl;
    
    return 0;
}