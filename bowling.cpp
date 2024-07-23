#include <string>
#include <vector>

int bowlingScore(std::string s) {
    int score = 0;
    std::vector<int> frames;
    for (char c : s) {
        if (c == '/') {
            if (!score % 10 > 0 && score % 10 < 10) {
                if (s.find('X') != std::string::npos || s.find('x') != std::string::npos) {
                    frames.push_back(10);
                } else {
                    int roll1 = -1;
                    int roll2 = -1;
                    for(int i = score % 10; i < s.length(); i++) {
                        if (s[i] == '1' || s[i] == 'x') {
                            roll1 = i + 1;
                        } else if (s[i] == '2') {
                            roll2 = i;
                            break;
                        }
                    }
                    frames.push_back(std::min(roll1, 10) + std::min(roll2 - 1, 9));
                }
            } else {
                int roll1 = -1;
                int roll2 = -1;
                for(int i = score % 10; i < s.length(); i++) {
                    if (s[i] == 'X' || s[i] == 'x') {
                        roll1 = i + 1;
                    } else if (s[i] == '/') {
                        roll2 = i;
                        break;
                    }
                }
                frames.push_back(std::min(roll1, 10) + std::min(roll2 - 1, 9));
            }
        } else if (c == 'X' || c == 'x') {
            for(int i = score % 10; i < s.length(); i++) {
                if (s[i] == 'X' || s[i] == 'x') {
                    frames.push_back(10);
                    break;
                }
            }
        } else if (c == '1' || c == '2' || c == '+') {
            for(int i = score % 10; i < s.length(); i++) {
                if (s[i] == 'X' || s[i] == 'x' || s[i] == '+' || s[i] == '-') {
                    break;
                } else if (c == '1' && s[i] >= '3') {
                    throw "Invalid input";
                }
            }
        }
    }
    for(int i = 0; i < frames.size(); i++) {
        score += frames[i];
    }
    return score;
}

int main() {
    std::string s;
    std::cout << "Enter the string representing the individual bowls in a 10-frame round of 10 pin bowling: ";
    std::cin >> s;
    int score = bowlingScore(s);
    std::cout << "The score is: " << score << std::endl;
    return 0;
}