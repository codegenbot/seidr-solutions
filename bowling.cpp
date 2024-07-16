#include <iostream>
#include <cctype>
#include <string>

int bowlingScore(const std::string& s) {
    int score = 0;
    int currentRoll = 0;

    for (int i = 0; i < s.size(); ++i) {
        char c = s[i];
        
        if (c == 'X') {
            score += 10;
            currentRoll = 0;
        } else if (c == '/') {
            // If we've just seen an X before the '/', it means the roll was a spare
            if (currentRoll > 0) {
                score += 10;
                currentRoll = 0;
            } else {
                score += currentRoll + 5;
                currentRoll = 0;
            }
        } else {
            if (std::isdigit(c)) {
                int firstRoll = c - '0';
                score += firstRoll;
                if (i < s.size() - 1) {
                    char nextC = s[i + 1];
                    if (std::isdigit(nextC)) {
                        int secondRoll = nextC - '0';
                        if (firstRoll + secondRoll == 10) {
                            score += 10;
                            currentRoll = 0;
                            i++;
                        } else {
                            score += secondRoll;
                            currentRoll = 10 - firstRoll - secondRoll;
                        }
                    } else {
                        currentRoll = 10 - firstRoll;
                    }
                } else {
                    currentRoll = 20 - firstRoll;
                }
            } else {
                currentRoll *= 10;
                currentRoll += c - '0';
            }
        }
    }

    return score;
}

int main() {
    std::string s;
    std::cin >> s;
    int result = bowlingScore(s);
    std::cout << "The score is: " << result << std::endl;
    return 0;
}