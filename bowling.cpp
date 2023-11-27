#include <iostream>
#include <string>
using namespace std;

int calculateScore(string frames) {
    int score = 0;
    int frame = 0;
    int len = frames.length();
    
    for (int i = 0; i < len; i++) {
        if (frames[i] == 'X') {
            score += 10;
            if (frame < 9) {
                if (frames[i+2] == '/') {
                    score += 10;
                } else {
                    score += (frames[i+1] == 'X') ? 10 : (frames[i+1] - '0');
                    score += (frames[i+2] == 'X') ? 10 : (frames[i+2] == '/' ? (10 - (frames[i+1] - '0')) : (frames[i+2] - '0'));
                }
            }
            frame++;
        } else if (frames[i] >= '1' && frames[i] <= '9') {
            score += (frames[i] - '0');
            if (i < len && frames[i+1] == '/') {
                score += (10 - (frames[i] - '0'));
            }
            frame++;
        } else if (frames[i] == '/') {
            score += (10 - (frames[i-1] - '0'));
            if (frame < 9) {
                score += (frames[i+1] == 'X') ? 10 : (frames[i+1] - '0');
            }
            frame++;
        }
    }
    
    return score;
}

int main() {
    string input;
    cout << "Enter the bowling frames: ";
    cin >> input;
    
    int output = calculateScore(input);
    cout << "Score: " << output << endl;
    
    return 0;
}