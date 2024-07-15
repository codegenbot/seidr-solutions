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
        int i = 0;
        while (c >= '1' && c <= '9') {
            count *= 10;
            count += c - '0';
            char temp = '\0'; 
            if (i < s.length() - 1) {
                if (s[i + 1] == '/') {
                    break;
                }
                temp = s[++i];
            }
            c = temp; 
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