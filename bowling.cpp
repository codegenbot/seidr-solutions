```cpp
#include <iostream>
#include <string>

int i = 0;
int bowlingScore(char c) {
    int score = 0;
    if (c == 'X') {
        score += 30;
    } else if (c == '/') {
        score += 10 + bowlingScore(s[i++]) + bowlingScore(s[i++]);
    } else {
        int count = 0;
        while (c >= '1' && c <= '9') {
            count *= 10;
            count += c - '0';
            if (i < s.length() - 1 && s[i] == '\n') break;
            c = s[i++];
        }
        score += count;
    }
    return score;
}

int main() {
    std::string s;
    std::cout << "Enter the input string: ";
    std::getline(std::cin, s);
    
    int totalScore = 0;
    for (char c : s) {
        totalScore += bowlingScore(c);
    }
    std::cout << "The total score is: " << totalScore << std::endl;
}