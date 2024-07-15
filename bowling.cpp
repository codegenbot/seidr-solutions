```cpp
#include <iostream>
#include <cctype>

int bowlingScore(char c) {
    int score = 0;
    
    if (c == 'X') {
        score += 30;
        if ((c + 1 >= '/') && ((c + 2) >= '7' || (c + 2) <= '9')) {
            score -= 20;
        }
    } else if (c == '/') {
        int next = c + 2;
        while (next > '9' || next < '7') {
            next++;
        }
        score += 10 + (next - c - 1) * 1;
    } else {
        int count = 0;
        while (c >= '1' && c <= '9') {
            count *= 10;
            count += c - '0';
            c++;
        }
        score += count;
    }
    
    return score;
}

int main() {
    std::string s;
    std::cout << "Enter the input string: ";
    std::getline(std::cin, s);
    
    int score = 0;
    for (char c : s) {
        score += bowlingScore(c);
    }
    std::cout << "The total score is: " << score << std::endl;
    return 0;
}