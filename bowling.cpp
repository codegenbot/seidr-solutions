#include <iostream>
#include <string>

int calculateFrameScore(const std::string& s, int index) {
    if (s[index] == 'X') {
        int frameScore = 10;
        if (s[index + 1] == 'X') {
            frameScore += 10;
            if (s[index + 2] == 'X') frameScore += 10;
            else frameScore += (s[index + 2] == '/') ? 10 - (s[index + 3] - '0') : s[index + 2] - '0';
        } else {
            frameScore += (s[index + 1] == '/') ? 10 : s[index + 1] - '0';
            frameScore += (s[index + 2] == 'X') ? 10 : (s[index + 2] == '/') ? 10 - (s[index + 3] - '0') : s[index + 2] - '0';
        }
        return frameScore;
    } else {
        return 0;
    }
}

int calculateBowlingScore(const std::string& s) {
    int total = 0;
    for (int i = 0; i < s.size(); ++i) {
        total += calculateFrameScore(s, i);
    }
    return total;
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << calculateBowlingScore(input) << std::endl;
    return 0;
}