#include <iostream>
#include <string>

int getScore(std::string input) {
    int score = 0;
    int frame = 1;
    int bowlIndex = 0;
    
    for (int i = 0; i < input.length(); i++) {
        if (frame > 10) {
            break;
        }
        
        char bowl = input[i];
        
        if (bowl == 'X') {
            score += 10;
            bowlIndex++;
            
            if (frame < 10) {
                score += input[i + 1] == 'X' ? 10 : input[i + 1] - '0';
                score += input[i + 2] == 'X' ? 10 : input[i + 2] - '0';
            } else if (frame == 10) {
                score += input[i + 1] == 'X' ? 10 : (input[i + 1] == '/' ? 10 - (input[i - 1] - '0') : input[i + 1] - '0');
                score += input[i + 2] == 'X' ? 10 : (input[i + 2] == '/' ? 10 - (input[i + 1] == 'X' ? 10 : input[i + 1] - '0') : input[i + 2] - '0');
            }
            
            frame++;
        } else if (bowl == '/') {
            score += 10 - (input[i - 1] - '0');
            bowlIndex++;
            
            if (frame < 10) {
                score += input[i + 1] == 'X' ? 10 : input[i + 1] - '0';
            } else if (frame == 10) {
                score += input[i + 1] == 'X' ? 10 : (input[i + 1] == '/' ? 10 - (input[i - 1] - '0') : input[i + 1] - '0');
            }
            
            frame++;
        } else if (bowl == '-') {
            bowlIndex++;
        } else {
            score += bowl - '0';
            bowlIndex++;
            
            if (frame < 10 && bowlIndex % 2 == 0) {
                score += input[i - 1] == '/' ? 10 - (input[i - 2] - '0') : 0;
            } else if (frame == 10 && bowlIndex % 2 == 0) {
                score += input[i - 1] == '/' ? 10 - (input[i - 2] - '0') : 0;
            }
            
            if (bowlIndex % 2 == 0) {
                frame++;
            }
        }
    }
    
    return score;
}

int main() {
    std::string input;
    std::cout << "Enter the string representing the individual bowls: ";
    std::cin >> input;
    
    int score = getScore(input);
    std::cout << "The score of the round is: " << score << std::endl;
    
    return 0;
}