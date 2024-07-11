#include <iostream>
#include <string>

int score(const std::string& s) {
    int totalScore = 0;
    int frame = 1;
    int i = 0;

    while (frame <= 10 && i < s.length()) {
        if (s[i] == 'X') {
            totalScore += 10;
            if (frame < 10) {
                totalScore += (s[i + 1] == 'X') ? 10 : (s[i + 1] - '0');
                totalScore += (s[i + 2] == 'X') ? 10 : (s[i + 2] == '/' ? 10 - (s[i + 1] - '0') : (s[i + 2] - '0'));
            }
            i++;
        } else if (s[i + 1] == '/') {
            totalScore += 10;
            totalScore += (s[i + 2] == 'X') ? 10 : (s[i + 2] - '0');
            i += 2;
        } else {
            totalScore += (s[i] == '-' ? 0 : (s[i] - '0'));
            totalScore += (s[i + 1] == '-' ? 0 : (s[i + 1] == '/' ? 10 - (s[i] - '0') : (s[i + 1] - '0')));
            i += 2;
        }
        frame++;
    }

    return totalScore;
}

int main() {
    std::string s;
    std::cin >> s;
    std::cout << score(s) << std::endl;
    return 0;
}