#include <string>
#include <iostream>

int bowlingScore(char c, int& i) {
    int score = 0;
    if (c == 'X') {
        score += 30;
    } else if (c == '/') {
        int next = std::find(std::next(s.begin(), i), s.end(), '\n') - s.begin();
        while ((s[next] < '7' || s[next] > '9') && next < s.length()) {
            next++;
        }
        score += 10 + (next - i - 1) * 1;
    } else {
        int count = 0;
        while (c >= '1' && c <= '9') {
            count *= 10;
            count += c - '0';
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
    
    int i = 0;
    for (char c : s) {
        bowlingScore(c, i);
    }
}