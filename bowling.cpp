```cpp
#include <iostream>
#include <string>

int bowlingScore(std::string s, int i) {
    int score = 0;
    if (s[i] == 'X') {
        score += 30;
    } else if (s[i] == '/') {
        int next = i + 1;
        while ((s[next] < '7' || s[next] > '9') && next < s.length()) {
            next++;
        }
        score += 10 + (next - i) * 1;
    } else {
        int count = 0;
        while (s[i] >= '1' && s[i] <= '9') {
            count *= 10;
            count += s[i] - '0';
            if (i < s.length() - 1 && s[i + 1] == '\n') break;
            i++;
        }
        score = count;
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