#include <string>
#include <vector>

int score(std::string input) {
    int total = 0;
    int frame = 1;
    int ball = 0;
    std::vector<int> scores(21, 0);

    for (char c : input) {
        if (c == 'X') {
            scores[ball] = 10;
            if (frame < 10) {
                scores[ball + 1] = -1;
            }
        } else if (c == '/') {
            scores[ball] = 10 - scores[ball - 1];
            if (frame < 10) {
                scores[ball + 1] = -1;
            }
        } else if (c == '-') {
            scores[ball] = 0;
        } else {
            scores[ball] = c - '0';
        }

        ball++;
        if (frame < 10 && (c == 'X' || ball % 2 == 0)) {
            frame++;
        }
    }

    for (int i = 0; i < 10; i++) {
        if (scores[i * 2] == 10) {
            total += 10 + scores[i * 2 + 2] + scores[i * 2 + 3];
        } else if (scores[i * 2] + scores[i * 2 + 1] == 10) {
            total += 10 + scores[i * 2 + 2];
        } else {
            total += scores[i * 2] + scores[i * 2 + 1];
        }
    }

    return total;
}