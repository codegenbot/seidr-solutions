```cpp
#include <iostream>
#include <string>

int scoreOfRound(const std::string& round) {
    int score = 0;
    int frame = 1;
    
    for (int i = 0; i < round.length(); i++) {
        // Handle strike
        if (round[i] == 'X') {
            score += 10;
            if (frame < 10) {
                score += (round[i + 1] == 'X') ? 10 : round[i + 1] - '0';
                score += (round[i + 2] == 'X') ? 10 : round[i + 2] - '0';
            }
            frame++;
        }
        // Handle spare
        else if (round[i] == '/') {
            score += 10 - (round[i - 1] - '0');
            if (frame < 10) {
                score += (round[i + 1] == 'X') ? 10 : round[i + 1] - '0';
            }
            frame++;
        }
        // Handle normal bowl
        else {
            score += round[i] - '0';
            if (frame < 10 && round[i] != '-') {
                if (round[i + 1] == '/') {
                    score += 10 - (round[i] - '0');
                }
                frame++;
            }
        }
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
```