#include <iostream>
#include <string>
using namespace std;

int calculateScore(string input) {
    int score = 0;
    int frame = 1;
    int bowl = 0;
    int frames[10] = {0};
    
    for (char c : input) {
        if (frame > 10) break;
        
        if (c == 'X') {
            frames[frame-1] = 10;
            frame++;
            bowl = 0;
        } else if (c == '/') {
            frames[frame-1] = 10 - frames[frame-1];
            frame++;
            bowl = 0;
        } else if (c == '-') {
            bowl++;
        } else {
            frames[frame-1] += c - '0';
            bowl++;
        }
        
        if (bowl == 2 || c == 'X' || c == '/') {
            score += frames[frame-1];
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