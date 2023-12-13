```cpp
#include <iostream>
#include <string>

int calculateScore(const std::string& input) {
    int score = 0;
    int frame = 1;
    int index = 0;

    while (frame <= 10 && index < input.size()) {
        if (input[index] == 'X') {
            score += 10;
            if (frame < 10) {
                score += (input[index + 1] == 'X') ? 10 : (input[index + 1] - '0');
                score += (input[index + 2] == 'X') ? 10 : (input[index + 2] - '0');
            } else if (frame == 10) {
                score += (input[index + 1] == 'X') ? 10 : (input[index + 1] - '0');
                score += (input[index + 2] == 'X') ? 10 : (input[index + 2] - '0');
            }
            index++;
        } else if (input[index] == '/') {
            score += 10 - (input[index - 1] - '0');
            if (frame < 10) {
                score += (input[index + 1] == 'X') ? 10 : (input[index + 1] - '0');
            } else if (frame == 10) {
                score += (input[index + 1] == 'X') ? 10 : (input[index + 1] - '0');
            }
            index++;
        } else if (input[index] == '-') {
        } else {
            score += (input[index] - '0');
        }
        index++;
        frame++;
    }
    return score;
}

int main() {
    std::string input;
    std::cout << "Enter the string representing the individual bowls: ";
    std::getline(std::cin, input);

    int score = calculateScore(input);
    std::cout << "The score of the round is: " << score << std::endl;

    return 0;
}
```