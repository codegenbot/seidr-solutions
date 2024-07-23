#include <string>

int score(std::string s) {
    int total = 0, frame = 1, ball = 0;
    for (char c : s) {
        if (c == 'X') {
            total += 10;
            if (frame < 10) {
                total += s[ball + 1] == 'X' ? 10 : (s[ball + 1] == '/' ? 10 - s[ball - 1] + '0' : s[ball + 1] - '0');
                total += s[ball + 2] == 'X' ? 10 : (s[ball + 2] == '/' ? 10 - s[ball + 1] + '0' : s[ball + 2] - '0');
                ball++;
            }
            frame++;
        } else if (c == '/') {
            total += 10 - s[ball - 1] + '0';
            total += s[ball + 1] == 'X' ? 10 : s[ball + 1] - '0';
            frame++;
            ball++;
        } else {
            total += c - '0';
            if (++ball % 2 == 0) frame++;
        }
    }
    return total;
}