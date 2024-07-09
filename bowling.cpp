#include <iostream>
#include <string>

int bowlingScore(std::string frame) {
    int score = 0;
    for (int i = 0; i < frame.length(); ++i) {
        if (frame[i] == 'X') {
            score += 10 + ((i > 0) ? bowlingScoreForSingle(frame, i - 1) : 0);
        } else if (frame[i] == '/') {
            int spare = 10 - std::stoi(frame.substr(i + 1)) - (bowlingScoreForSingle(frame, i));
            score += 10;
            if (spare > 0) {
                score += spare;
            }
        } else {
            int pins = std::stoi(frame.substr(i, 2));
            if (pins < 10) {
                score += pins + bowlingScoreForSingle(frame, frame.length() - 1);
            } else {
                score += pins;
            }
        }
    }
    return score;

}

int bowlingScoreForSingle(std::string frame, int index) {
    if (frame[index] == 'X') {
        return 10;
    } else if (frame[index] == '/') {
        int spare = 10 - std::stoi(frame.substr(index + 1));
        return spare;
    } else {
        int pins = std::stoi(frame.substr(index, 2));
        return pins;
    }
}

int main() {
    std::cout << "Enter a string representing the individual bowls in a 10-frame round of 10 pin bowling: ";
    std::string input;
    std::cin >> input;

    int score = bowlingScore(input);
    std::cout << "The score is: " << score << std::endl;

    return 0;
}