#include <iostream>
#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int roll1 = 0;
    int roll2 = 0;
    int frame = 1;

    for(int i = 0; i <= s.size() - 1; i++) {
        if(s[i] == 'X') {
            score += 10;
            if(i < s.size() - 1) {
                if(s[i + 1] == '/') {
                    score += 10 - (frame % 2);
                } else {
                    roll1 = 10;
                }
            }
            frame++;
        } else if(s[i] == '/') {
            score += 10 - (roll1 + roll2);
            frame++;
            roll1 = 0;
            roll2 = 0;
        } else {
            if(i < s.size() - 2 && s[i + 1] == 'X' && s[i + 2] == 'X') {
                score += 10 * 3;
                i++;
                i++;
                frame += 2;
            } else {
                roll1 = roll1 * 10 + (s[i] - '0');
                if(i < s.size() - 1) {
                    if(s[i + 1] == '/') {
                        score += 10 - (frame % 2);
                        i++;
                    } else {
                        roll2 = (s[i + 1] - '0');
                    }
                }
            }
        }
    }
    return score;
}

int main() {
    std::string s;
    std::cout << "Enter a string representing the individual bowls in a 10-frame round of 10 pin bowling: ";
    std::cin >> s;
    int score = bowlingScore(s);
    std::cout << "The score is: " << score << std::endl;
    return 0;
}