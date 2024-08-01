#include <iostream>
#include <string>

int score(const std::string &bowls) {
    int total = 0;
    int bowlIndex = 0;
    
    for (int frame = 0; frame < 10; ++frame) {
        if (bowls[bowlIndex] == 'X' || (bowls[bowlIndex] != 'X' && bowls[bowlIndex + 1] == '/')) {
            total += 10;
            total += (bowls[bowlIndex + 1] == 'X') ? 10 : (bowls[bowlIndex + 1] == '/' ? 10 - (bowls[bowlIndex + 2] - '0') : bowls[bowlIndex + 1] - '0');
            total += (bowls[bowlIndex + 2] == 'X') ? 10 : (bowls[bowlIndex + 2] == '/' ? 10 - (bowls[bowlIndex] - '0') : bowls[bowlIndex + 2] - '0');
            bowlIndex += (bowls[bowlIndex] == 'X') ? 1 : 2;
        } else if (bowls[bowlIndex + 1] == '/') {
            total += 10 - (bowls[bowlIndex] - '0') + (bowls[bowlIndex + 2] == 'X' ? 10 : bowls[bowlIndex + 2] - '0');
            bowlIndex += 2;
        } else {
            total += bowls[bowlIndex] - '0';
            total += bowls[bowlIndex + 1] - '0';
            bowlIndex += 2;
        }
    }
    
    return total;
}