#include <iostream>
#include <string>
using namespace std;

int calculateScore(string input) {
    int score = 0;
    int frame = 1;
    int bowlIndex = 0;
    
    for (int i = 0; i < input.length(); i++) {
        if (frame > 10) {
            break;
        }
        
        if (input[i] == 'X') {
            score += 10;
            
            if (frame < 10) {
                score += (input[i + 1] == 'X') ? 10 : (input[i + 1] - '0');
                score += (input[i + 2] == 'X') ? 10 : (input[i + 2] - '0');
            }
            
            bowlIndex++;
        } else if (input[i] == '/') {
            score += 10 - (input[i - 1] - '0');
            score += (input[i + 1] == 'X') ? 10 : (input[i + 1] - '0');
            
            bowlIndex++;
        } else if (input[i] == '-') {
            // do nothing
        } else {
            score += input[i] - '0';
            
            if (frame < 10 && bowlIndex % 2 == 0 && input[i - 1] != '/') {
                if (input[i + 1] == '/') {
                    score += 10 - (input[i] - '0');
                }
            }
            
            bowlIndex++;
        }
        
        if (bowlIndex % 2 == 0) {
            frame++;
        }
    }
    
    return score;
}

int main() {
    string input;
    getline(cin, input);
    
    int score = calculateScore(input);
    cout << score << endl;
    
    return 0;
}