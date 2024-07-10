#include <string>

int bowlingScore(std::string input) {
    int score = 0;
    for (int i = 0; i < input.size(); ++i) {
        if (input[i] == 'X') {
            score += 10;
            if (i + 1 < input.size() && input[i+1] != ' ') {
                if (input[i+1] == 'X') {
                    score += 10;
                    i++;
                } else {
                    score += input[i+2] - '0' + input[i+1] - '0';
                    i++;
                }
            }
        } else if (input[i] == '/') {
            score += 10 - (3 - (input[i-1] - '0') + (input[i+1] - '0'));
        } else if (input[i] == '-') {
            int j = i;
            while (++j < input.size() && input[j] != '/' && input[j] != ' ') {}
            score += 10 - (3 - (input[i] - '0') + (j-i-1));
        } else {
            score += input[i] - '0';
        }
    }
    return score;
}