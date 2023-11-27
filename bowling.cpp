#include <iostream>
#include <string>

int calculateScore(std::string input) {
    int score = 0;
    int frame = 0;
    int rolls = 0;
    int frames[10] = {0};

    for (char ch : input) {
        if (ch == 'X') {
            frames[frame] += 10;
            if (frame < 9) {
                frames[frame+1] += (ch - '0');
                if (frame < 8) {
                    frames[frame+2] += (ch - '0');
                }
            }
        } else if (ch == '/') {
            frames[frame] += (10 - (ch - '0'));
            if (frame < 9) {
                frames[frame+1] += (10 - (ch - '0'));
            }
        } else if (ch == '-') {
            rolls++;
        } else {
            frames[frame] += (ch - '0');
        }

        if (rolls % 2 == 0) {
            frame++;
        }
        rolls++;
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