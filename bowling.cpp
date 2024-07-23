#include <iostream>
#include <string>

int calculateBowlingScore(const std::string& s) {
    int total = 0;
    int frame = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'X') {
            total += 10;
            if (s[i + 1] == 'X') {
                total += 10;
                if (s[i + 2] == 'X') {
                    total += 10;
                } else {
                    total += (s[i + 2] == '/') ? 10 - (s[i + 3] - '0') : s[i + 2] - '0';
                }
            } else {
                total += (s[i + 1] == '/') ? 10 : s[i + 1] - '0';
                total += (s[i + 2] == 'X') ? 10 : (s[i + 2] == '/' ? 10 - (s[i + 3] - '0') : s[i + 2] - '0');
            }
            frame++;
            if (frame == 10) break;
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