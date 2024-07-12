#include <iostream>
#include <string>

int score(std::string s) {
    int total = 0;
    int frame = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            if (s[i + 1] == 'X' && s[i + 2] == 'X') {
                total += 30;
            } else if (s[i + 1] == '/' || s[i + 2] == '/') {
                total += 20;
            } else {
                total += 10 + (s[i + 1] - '0') + (s[i + 2] - '0');
            }
            frame++;
        } else if (s[i] == '/') {
            total += 10 - (s[i - 1] - '0') + ((s[i + 1] == 'X' || s[i + 1] == '/') ? 10 : (s[i + 1] - '0'));
        } else {
            total += s[i] - '0';
        }
        frame++;
        if (frame == 9) break;
    }
    return total;
}

int main() {
    std::string s;
    std::cin >> s;
    std::cout << score(s) << std::endl;
    return 0;
}