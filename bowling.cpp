#include <string>

int bowlingScore(char c) {
    int score = 0;
    if (c == 'X') {
        score += 30;
        if (c != '\n') {
            score -= 20;
        }
    } else if (c == '/') {
        int next = s.find('\n');
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
    
    for (char c : s) {
        bowlingScore(c);
    }
}