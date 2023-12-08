```cpp
#include <iostream>
#include <string>

int scoreOfRound(const std::string& round) {
    int score = 0;
    int frame = 1;
    int ballIndex = 0;
    int ballsRemaining = 10;

    for (char c : round) {
        if (frame > 10) {
            break;
        }
        
        if (c == 'X') {
            score += 10;
            
            if (frame < 10) {
                char nextBall = round[ballIndex + 1];

                if (nextBall == 'X') {
                    char nextNextBall = round[ballIndex + 2];
                    char nextNextNextBall = round[ballIndex + 3];
                    score += 10 + (nextNextBall == 'X' ? 10 : (nextNextBall - '0')) + (nextNextNextBall == 'X' ? 10 : (nextNextNextBall - '0'));
                } else {
                    char nextNextBall = round[ballIndex + 2];
                    score += (nextBall - '0') + (nextNextBall == '/' ? (10 - (nextBall - '0')) : (nextNextBall - '0'));
                }
            }
            
            frame++;
        } else if (c == '/') {
            score += (10 - ballsRemaining);
            
            if (frame < 10) {
                char nextBall = round[ballIndex + 1];
                score += (nextBall - '0');
                ballsRemaining = 10;
            }
            
            frame++;
        } else if (c == '-') {
            ballsRemaining--;
        } else {
            score += (c - '0');
            ballsRemaining--;
            
            if (ballsRemaining == 0) {
                frame++;
                ballsRemaining = 10;
            }
        }
        
        ballIndex++;
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
```