#include <iostream>
#include <string>

int bowlingScore(const std::string& input) {
    int score = 0;
    for(int i=1; i<=10; i++) {
        if(input[i-1] == 'X') {
            if(i<10) {
                if(input[2*i-2] != '/') {
                    score += 10 + (input[2*i-2]-'0'*10);
                } else {
                    score += 10;
                }
            } else {
                score += 10;
            }
        } else if(input[i*2-1] == '/') {
            int left = input[i*2-2] - '0';
            if(i < 9) {
                if(input[2*i+1] != 'X') {
                    score += 10 + left;
                } else {
                    score += 10 + left;
                }
            } else {
                score += left + 10;
            }
        } else {
            int left = input[i*2-2] - '0';
            int right = input[i*2-1] - '0';
            if(i < 9) {
                score += left + right;
            } else {
                score += left + right;
            }
        }
    }
    return score;
}

int main() {
    int score = bowlingScore("X/XXXX/8+5,X");
    std::cout << "The score is: " << score << std::endl;
    return 0;
}