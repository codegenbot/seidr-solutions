```cpp
#include <iostream>
#include <string>

int bowlingScore(char c) {
    int score = 0;
    if (c == 'X') {
        score += 30;
    } else if (c == '/') {
        return score + 10; 
    } else {
        int count = 0;
        size_t len = s.length();
        int i = 0;
        while (c >= '1' && c <= '9') {
            count *= 10;
            count += c - '0';
            if (++i < len - 1) {
                if (s[i] == '/') {
                    break;
                }
                c = s[i];
            } else {
                break;
            }
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