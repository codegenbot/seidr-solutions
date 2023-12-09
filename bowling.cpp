```cpp
#include <iostream>
#include <string>

int scoreOfRound(const std::string& round) {
    int score = 0;
    int frame = 1;
  
    for (int i = 0; i < round.length(); i++) {
        if (frame > 10) break;
        
        char bowl = round[i];
      
        if (bowl == 'X') {
            score += 10;
            if (frame < 10) {
                score += (round[i + 1] == 'X') ? 10 + (round[i + 2] - '0') : (round[i + 1] - '0') + (round[i + 2] - '0');
            }
            frame++;
        } else if (bowl == '/') {
            score += 10 - (round[i - 1] - '0');
            if (frame < 10) {
                score += (round[i + 1] == 'X') ? 10 : (round[i + 1] - '0');
            }
            i++;
            frame++;
        } else {
            score += bowl - '0';
            frame++;
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