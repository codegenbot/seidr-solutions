#include <iostream>
#include <string>

int getScore(std::string s) {
    int score = 0;
    int frame = 1;
    int i = 0;

    while (frame <= 10 && i < s.length()) {
        if (s[i] == 'X') {
            score += 10;
            if (i + 2 < s.length()) {
                if (s[i + 1] == '/' || s[i + 2] == '/') {
                    score += 10;
                } else {
                    score += (s[i + 1] - '0') + (s[i + 2] - '0');
                }
            }
            frame++;
            i++;
        } else if (s[i] == '/') {
            score += (10 - (s[i - 1] - '0'));
            if (i + 1 < s.length()) {
                score += (s[i + 1] - '0');
            }
            frame++;
            i++;
        } else {
            score += (s[i] - '0');
            frame++;
        }
        i++;
    }

    return score;
}

int main() {
    std::string s;
    std::cin >> s;

    int score = getScore(s);
    std::cout << score << std::endl;

    return 0;
}