#include <iostream>
#include <string>

int getScore(std::string input) {
    int score = 0;
    int frame = 1;
    int index = 0;
    
    while (frame <= 10) {
        char current = input[index];
        
        if (current == 'X') {
            score += 10;
            score += (input[index + 1] == 'X') ? 10 : (isdigit(input[index + 1]) ? input[index + 1] - '0' : 0);
            score += (input[index + 2] == 'X') ? 10 : (isdigit(input[index + 2]) ? input[index + 2] - '0' : 0);
        } else if (current == '/') {
            score += 10 - (input[index - 1] - '0');
            score += (input[index + 1] == 'X') ? 10 : (isdigit(input[index + 1]) ? input[index + 1] - '0' : 0);
        } else if (current == '-') {
            // do nothing
        } else {
            score += (current - '0');
        }
        
        frame++;
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