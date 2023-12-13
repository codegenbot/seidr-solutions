#include <iostream>
#include <string>

int getScore(const std::string& bowls) {
    int score = 0;
    int frame = 0;
    int frameScore[10] = {0};
    
    for (int i = 0; i < bowls.length() && frame < 10; i++) {
        if (bowls[i] == 'X') {
            frameScore[frame] += 10;
            if (frame < 9) {
                frameScore[frame] += (bowls[i + 1] == 'X') ? 10 : (bowls[i + 1] - '0');
                frameScore[frame] += (bowls[i + 2] == 'X') ? 10 : (bowls[i + 2] - '0');
            }
            frame++;
        } else if (bowls[i] == '/') {
            frameScore[frame] += (10 - (bowls[i - 1] - '0'));
            if (frame < 9) {
                frameScore[frame] += (bowls[i + 1] == 'X') ? 10 : (bowls[i + 1] - '0');
            }
            frame++;
        } else if (bowls[i] >= '0' && bowls[i] <= '9') {
            frameScore[frame] += (bowls[i] - '0');
            if (frame < 9 && (bowls[i + 1] == '/' || bowls[i + 1] == 'X')) {
                frameScore[frame] += 10;
            }
            if (frame < 9 && bowls[i + 1] == '/') {
                frameScore[frame] += (bowls[i + 2] == 'X') ? 10 : (bowls[i + 2] - '0');
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
    
    int score = getScore(bowls);
    std::cout << score << std::endl;
    
    return 0;
}