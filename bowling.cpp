#include <iostream>
#include <string>
using namespace std;

int calculateScore(string input) {
    int score = 0;
    int frame = 1;
    int bowl = 0;
    int bonus = 0;
    
    for (char c : input) {
        if (frame > 10) {
            break;
        }
        
        if (c == 'X') {
            score += 10 + bonus;
            bonus = 0;
            
            if (bowl == 0) {
                frame++;
            } else if (bowl == 1) {
                bowl = 0;
                frame++;
            }
        } else if (c == '/') {
            score += 10 - bonus;
            bonus = 0;
            
            if (bowl == 0) {
                bowl = 1;
            } else {
                bowl = 0;
                frame++;
            }
        } else if (c == '-') {
            bonus = 0;
            
            if (bowl == 0) {
                bowl = 1;
            } else {
                bowl = 0;
                frame++;
            }
        } else {
            score += c - '0' + bonus;
            bonus = 0;
            
            if (bowl == 0) {
                bowl = 1;
            } else {
                bowl = 0;
                frame++;
            }
        }
        
        if (bowl == 1 && c != 'X') {
            bonus = c - '0';
        }
    }
    
    return score;
}

int main() {
    string input;
    cin >> input;
    
    int score = calculateScore(input);
    cout << score << endl;
    
    return 0;
}