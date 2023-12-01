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
            if (frame < 10) {
                score += (input[index + 1] == 'X') ? 10 : std::stoi(std::string(1, input[index + 1]));
                score += (input[index + 2] == 'X') ? 10 : std::stoi(std::string(1, input[index + 2]));
            } else {
                score += (input[index + 1] == 'X') ? 10 : ((input[index + 1] == '/') ? 10 - std::stoi(std::string(1, input[index + 2])) : std::stoi(std::string(1, input[index + 1])));
                score += (input[index + 2] == 'X') ? 10 : ((input[index + 2] == '/') ? 10 - std::stoi(std::string(1, input[index + 1])) : std::stoi(std::string(1, input[index + 2])));
            }
            
            index++;
        } else if (current == '/') {
            score += 10 - std::stoi(std::string(1, input[index - 1]));
            score += (input[index + 1] == 'X') ? 10 : std::stoi(std::string(1, input[index + 1]));
            
            index++;
        } else if (current == '-') {
            // do nothing
        } else {
            score += std::stoi(std::string(1, current));
        }
        
        index++;
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