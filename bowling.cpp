#include <iostream>
#include <string>

int score(std::string s) {
    int total = 0;
    int roll = 1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            total += 10;
            if (s[i + 2] == '/')
                total += 10 - (s[i + 1] == '-' ? 0 : s[i + 1] - '0');
            else if (s[i + 1] == 'X')
                total += 10;
            else
                total += (s[i + 1] == '-' ? 0 : s[i + 1] - '0');

            total += (roll < 10 || (roll == 10 && (s[i + 1] == 'X' || s[i + 2] == 'X'))) ? 10 : (s[i + 2] == '/' ? 10 - (s[i + 3] - '0') : s[i + 2] - '0');
        } else if (s[i] == '/') {
            total += 10 - (s[i - 1] - '0');
        } else if (s[i] == '-') {
            // do nothing
        } else {
            total += s[i] - '0';
            if (s[i + 1] == '/') {
                total += 10 - (s[i + 2] - '0');
            }
        }
        if (s[i] != 'X') {
            roll++;
        }
        if (roll > 10) break;
    }
    return total;
}

int main() {
    std::string s;
    std::cin >> s;
    std::cout << score(s) << std::endl;
    return 0;
}