#include <iostream>
#include <string>

int getScore(std::string bowls) {
    int score = 0;
    int frame = 0;
    int frameScore[10] = {0};

    for (int i = 0; i < bowls.size(); i++) {
        if (frame == 10) {
            break;
        }

        if (bowls[i] == 'X') {
            frameScore[frame] += 10;
            if (frame < 9) {
                frameScore[frame] += frameScore[frame + 1];
                if (bowls[i + 2] == 'X') {
                    frameScore[frame] += 10;
                } else if (bowls[i + 2] == '/') {
                    frameScore[frame] += 10 - (bowls[i + 1] - '0');
                } else {
                    frameScore[frame] += bowls[i + 2] - '0';
                }
            }
            frame++;
        } else if (bowls[i] == '/') {
            frameScore[frame] += 10 - (bowls[i - 1] - '0');
            if (frame < 9) {
                frameScore[frame] += frameScore[frame + 1];
                if (bowls[i + 1] == 'X') {
                    frameScore[frame] += 10;
                } else {
                    frameScore[frame] += bowls[i + 1] - '0';
                }
            }
            frame++;
        } else {
            frameScore[frame] += bowls[i] - '0';
            if (frame < 9 && (bowls[i] - '0') + (bowls[i + 1] - '0') == 10) {
                frameScore[frame] += frameScore[frame + 1];
            }
            i++;
        }
    }

    for (int i = 0; i < 10; i++) {
        score += frameScore[i];
    }

    return score;
}

int main() {
    std::string bowls;
    std::cin >> bowls;
    std::cout << getScore(bowls) << std::endl;
    return 0;
}