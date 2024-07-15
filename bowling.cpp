#include <iostream>
#include <cctype>

int bowlingScore(char c) {
    int score = 0;
    
    if (c == 'X') {
        score += 30;
        if (std::isdigit(c + 1) || ((c + 1) == '/' && std::isdigit(c + 2))) {
            score -= 20;
        }
    } else if (c == '/') {
        int next = c + 2;
        while (!std::isdigit(next)) {
            next++;
        }
        score += 10 + (next - '0') * 1;
    } else {
        int count = 0;
        while (std::isdigit(c)) {
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
    
    for (char c : s) {
        int score = bowlingScore(c);
        std::cout << "The score is: " << score << std::endl;
    }
}