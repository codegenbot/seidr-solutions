#include <iostream>
#include <string>

int getFrameScore(char bowl1, char bowl2) {
    int score = 0;
    if (bowl1 == 'X') {
        score = 10;
    } else if (bowl1 == '/') {
        score = 10 - (bowl2 - '0');
    } else {
        score = (bowl1 - '0') + (bowl2 - '0');
    }
    return score;
}

int getScore(std::string input) {
    int score = 0;
    int frame = 0;
    for (int i = 0; i < input.length(); i++) {
        if (frame == 10) {
            break;
        }
        if (input[i] == 'X') {
            score += 10 + getFrameScore(input[i+1], input[i+2]);
            frame++;
        } else if (input[i] == '/') {
            score += 10 + getFrameScore(input[i+1], input[i+2]);
            i++;
            frame++;
        } else {
            score += getFrameScore(input[i], input[i+1]);
            i++;
            frame++;
        }
    }
    return score;
}

int main() {
    std::string input;
    std::cin >> input;
    int score = getScore(input);
    std::cout << score << std::endl;
    return 0;
}