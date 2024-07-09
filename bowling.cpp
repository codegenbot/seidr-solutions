```c
#include <string>

int main() {
    std::string input = "X/X/5-4/X/8+3/2-1/X/7+2/6"; 
    int result = bowlingScore(input);
    return 0;
}

int bowlingScore(std::string input) {
    int score = 0;
    int i = 0;
    while (i < input.length()) {
        if (input[i] == 'X') { 
            score += 10;
            if (i + 1 < input.length() && input[i+1] == 'X') { 
                score += 10;
                i++; 
            } else if (i + 2 < input.length()) {
                score += input[i+1] - '0' + input[i+2] - '0';
                i+=2; 
            }
        } else if(input[i] == '/') { 
            score += 10 - (input[i+1] - '0' + input[i+2] - '0');
            i+=2; 
        } else {
            int roll1 = input[i] - '0';
            if(i + 1 < input.length() && input[i+1] == '/') { 
                score += roll1 + 10 - (input[i+2] - '0' + input[i+3] - '0');
                i+=3; 
            } else {
                int roll2 = input[i+1] - '0';
                score += roll1 + roll2;
                i++; 
            }
        }
    }
    return score;
}