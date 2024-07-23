#include <iostream>
#include <string>

int calculateBowlingScore(const std::string& s) {
    int total = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'X') {
            total += 10;
            total += (s[i + 1] == 'X') ? 10 : (s[i + 1] == '/' ? 10 - (s[i + 2] - '0') : s[i + 1] - '0');
            total += (s[i + 2] == 'X') ? ((s[i + 3] == 'X') ? 10 : (s[i + 3] == '/' ? 10 - (s[i + 4] - '0') : s[i + 3] - '0')) : (s[i + 2] == '/' ? 10 : s[i + 2] - '0');
        }
    }
    return total;
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << calculateBowlingScore(input) << std::endl;
    return 0;
}