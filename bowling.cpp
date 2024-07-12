#include <iostream>
#include <string>

int score(std::string s) {
    int total = 0;
    int roll = 1;

    for (int i = 0; i < s.size() && roll <= 10; i++) {
        if (s[i] == 'X') {
            total += 10;
            if (roll < 10) { // not the last frame
                total += (s[i + 2] == 'X' ? 10 : (s[i + 2] == '/' ? 10 - (s[i + 3] == '-' ? 0 : s[i + 3] - '0') : (s[i + 2] == '-' ? 0 : s[i + 2] - '0')));
            }
            roll++;
        } else if (s[i] == '/') {
            total += 10 - (s[i - 1] - '0');
        } else if (s[i] != '-' && s[i] != '|') {
            total += s[i] - '0';
        }

        if (s[i] != 'X' && s[i] != '|') {
            if (s[i] == '/') {
                total += (s[i + 1] == 'X' ? 10 : (s[i + 1] == '-' ? 0 : s[i + 1] - '0'));
            }
            roll++;
        }
    }

    return total;
}

int main() {
    std::string s;
    std::cin >> s;
    std::cout << score(s) << std::endl;
    return 0;
}