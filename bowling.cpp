#include <iostream>
#include <string>

int score(const std::string& frames) {
    int totalScore = 0;
    int frame = 0;
    int rolls = 0;

    for (char c : frames) {
        if (c == 'X') {
            totalScore += 10;
            if (frame < 9) {
                totalScore += (frames[rolls + 1] == 'X') ? 10 : (frames[rolls + 1] - '0');
                totalScore += (frames[rolls + 2] == 'X') ? 10 : (frames[rolls + 2] == '/' ? (10 - (frames[rolls + 1] - '0')) : (frames[rolls + 2] - '0'));
            }
            rolls++;
        } else if (c == '/') {
            totalScore += (10 - (frames[rolls - 1] - '0'));
            if (frame < 9) {
                totalScore += (frames[rolls + 1] == 'X') ? 10 : (frames[rolls + 1] - '0');
            }
            rolls++;
        } else {
            totalScore += (c - '0');
        }

        rolls++;
        frame++;
    }

    return totalScore;
}

int main() {
    std::string frames;
    std::cin >> frames;

    int result = score(frames);
    std::cout << result << std::endl;

    return 0;
}