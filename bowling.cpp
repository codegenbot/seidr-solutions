#include <iostream>
#include <string>

int calculateScore(std::string input) {
    int score = 0;
    int frame = 0;
    int roll = 0;
    int frames[10] = {0};

    for (char ch : input) {
        if (ch == 'X') {
            frames[frame] += 10;
            if (frame < 9) {
                frames[frame+1] += 10;
                if (roll == 0 && frames[frame+1] == 10) {
                    frames[frame+1] += (ch - '0');
                }
                if (frame < 8 && roll == 0 && input[roll+2] == 'X') {
                    frames[frame+2] += 10;
                }
            }
            roll = (roll + 1) % 2;
        } else if (ch == '/') {
            frames[frame] += (10 - (input[roll-1] - '0'));
            if (frame < 9) {
                frames[frame+1] += (10 - (input[roll-1] - '0'));
            }
            roll = (roll + 1) % 2;
        } else if (ch == '-') {

        } else {
            frames[frame] += (ch - '0');
            roll = (roll + 1) % 2;
        }

        if (roll == 0) {
            frame++;
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