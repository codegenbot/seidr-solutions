#include <iostream>
#include <string>

int calculateBowlingScore(std::string s) {
    int total = 0;
    for (int i = 0; i < s.size(); i++) {
        total += 10 - (s[i] - '0');
    }
    return total;
}

int main() {
    std::string s;
    std::cin >> s;

    std::cout << calculateBowlingScore(s) << std::endl;

    return 0;
}