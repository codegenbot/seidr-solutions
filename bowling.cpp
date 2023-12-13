#include <iostream>
#include <string>

int getScore(const std::string& input) {
    int score = 0;
    int frame = 0;
    int rolls = 0;
    int frameScore[10] = {0};

    for (char c : input) {
        if (c == 'X') {
            frameScore[frame] += 10;
            rolls++;
            if (rolls == 1) {
                frame++;
            }
        } else if (c == '/') {
            frameScore[frame] += (10 - frameScore[frame]);
            rolls++;
            if (rolls == 2) {
                frame++;
                rolls = 0;
            }
        } else if (c == '-') {
            rolls++;
            if (rolls == 2) {
                frame++;
                rolls = 0;
            }
        } else {
            frameScore[frame] += (c - '0');
            rolls++;
            if (rolls == 2) {
                frame++;
                rolls = 0;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        score += frameScore[i];
        if (i < 9 && frameScore[i] == 10) {
            if (input[i] == 'X') {
                score += frameScore[i + 1] + frameScore[i + 2];
            } else {
                score += frameScore[i + 1];
            }
        } else if (i < 9 && frameScore[i] + frameScore[i + 1] == 10) {
            score += frameScore[i + 2];
        }
    }

    return score;
}

int main() {
    std::string input;
    std::cout << "Enter the string representing the individual bowls: ";
    std::cin >> input;
    int score = getScore(input);
    std::cout << "The score is: " << score << std::endl;
    return 0;
}