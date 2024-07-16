```c++
#include <string>

long long bowlingScore(const std::string& input) {
    long long score = 0;
    int currentRoll = 0;

    const char* chars = input.c_str();
    for (; *chars != '\0'; ++chars) { 
        char c = *chars;
        if (!((c >= '0' && c <= '9') || c == 'X' || c == '/')) {
            return -1;
        }

        if (c == 'X') {
            score += 10;
            currentRoll = 0;
        } else if (c == '/') {
            score += currentRoll + 5;
            currentRoll = 0;
        } else {
            if(c >= '0' && c <= '9') {
                currentRoll += c - '0';
            } else {
                currentRoll *= 10;
                currentRoll += c - '0';

                if(input.length() - input.find(chars) > 1) {
                    char nextC = chars[input.find(chars) + 1];
                    if(nextC >= '0' && nextC <= '9') {
                        int secondRoll = nextC - '0';
                        if(currentRoll + secondRoll == 10) {
                            score += 10;
                            currentRoll = 0;
                        } else {
                            score += secondRoll;
                            currentRoll = 10 - currentRoll - secondRoll;
                        }
                    } else {
                        currentRoll = 10 - currentRoll;
                    }
                } else {
                    if(currentRoll < 10) {
                        score += currentRoll;
                    } else {
                        score += 10;
                        score += (currentRoll - 10);
                    }
                }
            }

            if(input.find(chars) == input.length() - 1 || ((c >= '0' && c <= '9'))) {
                if(currentRoll < 10) {
                    score += currentRoll;
                } else {
                    score += 10;
                    score += (currentRoll - 10);
                }
            }
        }
    }

    return score;
}

int main() {
    long long score = bowlingScore("X/X/8-5/7-3/6-2/4-1/X");
    return 0;
}