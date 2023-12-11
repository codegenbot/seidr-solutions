#include <iostream>
#include <string>
using namespace std;

int calculateScore(string bowls) {
    int score = 0;
    int frame = 1;
    int frameScore = 0;
    int bowlIndex = 0;
    
    while (frame <= 10 && bowlIndex < bowls.length()) {
        char bowl = bowls[bowlIndex];
        
        if (bowl == 'X') {
            score += 10;
            score += (bowls[bowlIndex + 1] == 'X') ? 10 : (bowls[bowlIndex + 1] - '0');
            score += (bowls[bowlIndex + 2] == 'X') ? 10 : (bowls[bowlIndex + 2] - '0');
            frame++;
            bowlIndex++;
        } else if (bowl == '/') {
            score += 10;
            score += (bowls[bowlIndex + 2] == 'X') ? 10 : (bowls[bowlIndex + 2] - '0');
            frame++;
            bowlIndex += 2;
        } else {
            score += (bowl - '0');
            frameScore += (bowl - '0');
            
            if (frameScore == 10) {
                score += (bowls[bowlIndex + 1] == 'X') ? 10 : (bowls[bowlIndex + 1] - '0');
                frame++;
                frameScore = 0;
            }
            
            bowlIndex++;
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