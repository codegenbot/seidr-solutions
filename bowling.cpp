#include <iostream>
#include <string>

int getScore(const std::string& input) {
    int score = 0;
    int frame = 1;
    int roll = 0;

    for (int i = 0; i < input.length(); i++) {
        char c = input[i];
        if (c == 'X') {
            score += 10;
            
            if (frame < 10) {
                score += (input[i + 1] == 'X') ? 10 : (input[i + 1] - '0');
                score += (input[i + 2] == 'X') ? 10 : ((input[i + 2] == '/') ? (10 - (input[i + 1] - '0')) : (input[i + 2] - '0'));
                frame++;
            }
        } else if (c == '/') {
            score += (10 - (input[i - 1] - '0')) + ((input[i + 1] == 'X') ? 10 : (input[i + 1] - '0'));
            
            if (frame < 10) {
                frame++;
            }
        } else if (c == '-') {
            // do nothing
        } else {
            score += (c - '0');
            
            if (roll == 0) {
                roll++;
            } else {
                roll = 0;
                frame++;
            }
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