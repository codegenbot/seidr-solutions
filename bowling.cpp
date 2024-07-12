#include <iostream>
#include <string>
#include <cctype>

int calculateBowlingScore(const std::string& s) {
    int total = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '/') {
            total += 10 - (isdigit(s[i - 1]) ? s[i - 1] - '0' : 0);
        } else if (s[i] == 'X') {
            total += 10;
            if (s[i + 1] == 'X') {
                total += 10;
                if (s[i + 2] == 'X') {
                    total += 10;
                } else {
                    total += isdigit(s[i + 2]) ? s[i + 2] - '0' : 0;
                }
            } else {
                total += (s[i + 1] == '/') ? 10 : (isdigit(s[i + 1]) ? s[i + 1] - '0' : 0);
                if (s[i + 2] == 'X') {
                    total += 10;
                } else {
                    total += (s[i + 2] == '/') ? 10 - (isdigit(s[i + 1]) ? s[i + 1] - '0' : 0) : (isdigit(s[i + 2]) ? s[i + 2] - '0' : 0);
                }
            }
        } else if (s[i] == '-') {
            total += 0;
        } else if (isdigit(s[i])) {
            total += s[i] - '0';
        }
    }
    return total;
}

int main() {
    std::string s;
    std::cin >> s;

    int score = calculateBowlingScore(s);
    std::cout << score << std::endl;

    return 0;
}