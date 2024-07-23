```c++
#include <iostream>
#include <string>

using namespace std;

int bowlingScore(string s) {
    int score = 0;
    string frames[] = {"X", "X", "X", "X", "X", "X", "X", "X", "X", "X"};
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 10;
        } else if (s[i] == '/') {
            score += 10 - ((frames[9-i][0] - '0') + (frames[9-i][1] - '0'));
        } else {
            frames[9-i] = s.substr(i, 2);
        }
    }
    
    for (int i = 0; i < 9; i++) {
        if (frames[i] == "X") {
            score += 10;
        } else if (frames[i][1] == '/') {
            score += 10 - ((frames[i][0] - '0') + (frames[i][1] - '0'));
        } else {
            score += (frames[i][0] - '0') + (frames[i][1] - '0');
        }
    }
    
    return score;
}

int main() {
    string input;
    cout << "Enter the scores of each frame separated by spaces or '/' for strikes or spares: ";
    getline(cin, input);
    int score = bowlingScore(input);
    cout << "Score: " << score << endl;
    return 0;
}