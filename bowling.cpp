```cpp
#include <iostream>
#include <string>

int bowlingScore(std::string s, int i) {
    int score = 0;
    if (s[i] == 'X') {
        score += 30;
    } else if (s[i] == '/') {
        for (++i; i < s.length() && (s[i] < '7' || s[i] > '9'); i++) {}
        score += 10 + (i - 1) * 1;
    } else {
        int count = 0;
        while (s[i] >= '1' && s[i] <= '9') {
            count = count * 10 + (s[i++] - '0');
        }
        score += count;
    }
    return score;
}

int main() {
    std::string s;
    std::cout << "Enter the input string: ";
    std::getline(std::cin, s);
    
    int i = 0;
    int totalScore = 0;
    for (; i < s.length(); i++) {
        totalScore += bowlingScore(s, i);
    }
    std::cout << "The total score is: " << totalScore << std::endl;
}