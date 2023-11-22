#include <iostream>
#include <string>

int calculateScore(const std::string& rounds) {
    int score = 0;
    int frame = 1;
    int roundIndex = 0;

    while (frame <= 10 && roundIndex < rounds.length()) {
        if (rounds[roundIndex] == 'X') {
            score += 10;
            if (roundIndex + 2 < rounds.length()) {
                if (rounds[roundIndex + 2] == 'X') {
                    score += 10;
                } else if (rounds[roundIndex + 2] == '/') {
                    score += 10;
                } else {
                    score += rounds[roundIndex + 2] - '0';
                }
            }
            if (roundIndex + 4 < rounds.length()) {
                if (rounds[roundIndex + 4] == 'X') {
                    score += 10;
                } else if (rounds[roundIndex + 4] == '/') {
                    score += 10;
                } else {
                    score += rounds[roundIndex + 4] - '0';
                }
            }
            roundIndex++;
        } else if (rounds[roundIndex] == '/') {
            score += 10;
            if (roundIndex + 2 < rounds.length()) {
                if (rounds[roundIndex + 2] == 'X') {
                    score += 10;
                } else {
                    score += rounds[roundIndex + 2] - '0';
                }
            }
            roundIndex++;
        } else {
            score += rounds[roundIndex] - '0';
        }

        frame++;
        roundIndex++;
    }

    return score;
}

int main() {
    std::string rounds;
    std::cout << "Enter the rounds: ";
    std::cin >> rounds;

    int score = calculateScore(rounds);
    std::cout << "Score: " << score << std::endl;

    return 0;
}