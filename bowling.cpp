#include <string>

int bowlingScore(std::string input) {
    int score = 0;
    for (int i = 0; i < input.size(); ++i) {
        if (input[i] == 'X') {
            score += 10;
            if (i < input.size() - 1 && input[i + 1] != '/') {
                score += input[i + 2] - '0' + input[i + 3] - '0';
            }
        } else if (input[i] == '/') {
            score += 10 - score;
        } else if (input[i] >= '1' && input[i] <= '9') {
            int pins = input[i] - '0';
            if (i < input.size() - 1 && input[i + 1] == '+') {
                score += pins + input[i + 2] - '0';
            } else {
                score += pins;
            }
        }
    }
    return score;
}