#include <iostream>
#include <string>

using namespace std;

int calculateScore(string bowls) {
    int score = 0;
    int frame = 0;
    
    for (int i = 0; i < bowls.length(); i++) {
        if (bowls[i] == 'X') {
            score += 10;
            
            if (frame < 9) {
                if (bowls[i + 2] == 'X') {
                    score += 10;
                } else if (bowls[i + 2] == '/') {
                    score += 10 - (bowls[i + 1] - '0');
                } else {
                    score += bowls[i + 1] - '0' + bowls[i + 2] - '0';
                }
            }
            
            frame++;
        } else if (bowls[i] == '/') {
            score += 10 - (bowls[i - 1] - '0');
            
            if (frame < 9) {
                if (bowls[i + 1] == 'X') {
                    score += 10;
                } else {
                    score += bowls[i + 1] - '0';
                }
            }
            
            frame++;
        } else if (isdigit(bowls[i])) {
            score += bowls[i] - '0';
            
            if (i > 1 && bowls[i - 2] == '/') {
                score += bowls[i] - '0';
            }
        }
        
        if (frame == 9) {
            break;
        }
    }
    
    return score;
}

int main() {
    string bowls;
    cin >> bowls;
    
    int score = calculateScore(bowls);
    cout << score << endl;
    
    return 0;
}