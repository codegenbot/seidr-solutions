#include <iostream>
#include <string>
#include <cctype>

int calculateBowlingScore(const std::string& s) {
    int total = 0;
    for (int i = 0; i < s.size(); ++i) {
        total += (s[i + 2] == 'X' ? 10 : (s[i + 2] == '/' ? 10 - (s[i + 3] == '-' ? 0 : s[i + 3] - '0') : (s[i + 2] == '-' ? 0 : (isdigit(s[i + 2]) ? s[i + 2] - '0' : 10 - (s[i + 3] == '-' ? 0 : s[i + 3] - '0'))));
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