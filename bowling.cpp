#include <iostream>
#include <string>

int score(std::string s) {
    int total = 0;
    int roll = 1;
    int i = 0;

    while (i < s.size() && roll <= 10) {
        if (s[i] == 'X') {
            total += 10;
            if (roll < 10) {
                total += (s[i + 2] == 'X' ? 10 : (s[i + 2] == '/' ? 10 : (s[i + 2] == '-' ? 0 : s[i + 2] - '0')));
                if (s[i + 2] == 'X' && roll < 9) {
                    total += (s[i + 4] == 'X' ? 10 : (s[i + 4] == '/' ? 10 - (s[i + 5] == '-' ? 0 : s[i + 5] - '0') : (s[i + 4] == '-' ? 0 : s[i + 4] - '0')));
                }
            } else {
                total += (s[i + 2] == 'X' ? 10 : (s[i + 2] == '/' ? 10 : (s[i + 2] == '-' ? 0 : s[i + 2] - '0')));
                total += (s[i + 4] == 'X' ? 10 : (s[i + 4] == '/' ? 10 - (s[i + 5] == '-' ? 0 : s[i + 5] - '0') : (s[i + 4] == '-' ? 0 : s[i + 4] - '0')));
            }
            roll++;
            i++;
        } else if (s[i] == '/') {
            total += 10 - (s[i - 1] - '0');
            total += (s[i + 1] == 'X' ? 10 : (s[i + 1] == '-' ? 0 : s[i + 1] - '0'));
            roll++;
            i++;
        } else if (s[i] != '-' && s[i] != '|') {
            total += s[i] - '0';
        }

        i++;
    }

    return total;
}

int main() {
    std::string s;
    std::cin >> s;
    std::cout << score(s) << std::endl;
    return 0;
}