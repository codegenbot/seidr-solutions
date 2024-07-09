#include <vector>
#include <string>

int bowlingScore(const std::vector<char>& input) {
    int score = 0;
    int i = 0;
    while(i < input.size()) {
        if(input[i] == 'X') { 
            score += 10;
            i++; 
        } else if(input[i] == '/') { 
            int next = 10 - (input[i+1] - '0' + input[i+2] - '0');
            score += roll + next; i+=3; 
        } else {
            int roll = 0;
            while(i < input.size() && input[i] != '-' && input[i] != '/' ) {
                if(input[i] == '/') break;
                roll = roll * 10 + (input[i] - '0');  
                i++;  
            }
            if(input[i] == '/') {
                score += roll;
                i++;
            } else if(input[i] == 'X') {
                score += roll + 10;
                i+=2; 
            } else {
                int nextRoll = 0;
                while(i < input.size() && input[i] != '-' && input[i] != '/' ) {
                    if(input[i] == '/') break;
                    nextRoll = nextRoll * 10 + (input[i] - '0');  
                    i++;  
                }
                score += roll + nextRoll;
            }
        }
    }
    return score;
}

int main() {
    std::string input = "your-input-string"; 
    std::vector<char> charInput(input.begin(), input.end());
    int result = bowlingScore(charInput);
    return 0;
}