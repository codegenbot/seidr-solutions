#include <iostream>
#include <string>

int calculateFrameScore(const std::string& s, int index) {
    if (s[index] == 'X') {
        int frameScore = 10;
        int nextIndex = index + 1;
        int remainingBalls = 2;
        while (remainingBalls > 0 && nextIndex < s.size()) {
            if (s[nextIndex] == 'X') {
                frameScore += 10;
            } else if (s[nextIndex] == '/') {
                frameScore += 10 - (s[nextIndex - 1] - '0');
            } else {
                frameScore += s[nextIndex] - '0';
            }
            remainingBalls--;
            nextIndex++;
        }
        return frameScore;
    } else if (s[index] == '/') {
        if (s[index - 2] == 'X' || s[index - 1] == '/') {
            return 20;
        } else {
            return 10 - (s[index - 1] - '0') + (s[index + 1] == 'X' ? 10 : s[index + 1] - '0');
        }
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