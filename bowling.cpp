#include <string>

int calculateScore(std::string input) {
    int score = 0;
    int i = 0;
    while (i < input.length()) {
        std::string roll = input.substr(i, 1);
        if (roll == "X") {
            score += 10 + strikeRolls(input, ++i);
        } else if (isdigit(roll[0])) {
            int rollValue = roll[0] - '0';
            score += rollValue;
            i++;
            if (input[i] == '/') {
                i++;
                rollValue = input.substr(i, 1) - '0' + input.substr(i+1, 1) - '0';
                i++;
                score += rollValue;
            }
        } else {
            int roll1 = input.substr(i, 1) - '0';
            i++;
            int roll2 = input.substr(i, 1) - '0';
            i++;
            score += roll1 + roll2;
        }
    }
    return score;
}