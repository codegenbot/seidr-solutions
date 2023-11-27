#include <iostream>
#include <string>

int calculateScore(std::string input) {
    int score = 0;
    int frame = 0;
    int frames[10] = {0};

    for (int i = 0; i < input.length(); i++) {
        char ch = input[i];
        
        if (ch == 'X') {
            frames[frame] += 10;
            if (frame < 8) {
                frames[frame+1] += 10;
                frames[frame+2] += 10;
            } else if (frame == 8) {
                frames[frame+1] += 10;
            }
            
            if ((i < input.length() - 2) && (input[i+2] == '/')) {
                frames[frame+1] += (10 - frames[frame+1]);
            }
            
            frame++;
        } else if (ch == '/') {
            frames[frame] += (10 - frames[frame]);
            if (frame < 8) {
                frames[frame+1] += (10 - frames[frame]);
            }
            
            frame++;
        } else if (ch == '-') {
            
        } else {
            frames[frame] += (ch - '0');
            if (((i+1) % 2 == 0) && (frame < 9)) {
                frame++;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        score += frames[i];
    }

    return score;
}

int main() {
    std::string input;
    std::cin >> input;

    int score = calculateScore(input);
    std::cout << score << std::endl;

    return 0;
}