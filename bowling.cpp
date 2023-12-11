#include <iostream>
#include <string>
using namespace std;

int getScore(string bowls) {
    int score = 0;
    int frame = 0;
    int i = 0;
    
    while (frame < 10) {
        if (bowls[i] == 'X') {
            score += 10;
            if (bowls[i + 2] == 'X') {
                score += 10;
                if (bowls[i + 4] == 'X') {
                    score += 10;
                } else {
                    score += bowls[i + 4] - '0';
                }
            } else {
                if (bowls[i + 3] == '/') {
                    score += 10;
                } else {
                    score += bowls[i + 2] - '0' + bowls[i + 3] - '0';
                }
            }
            i++;
        } else if (bowls[i + 1] == '/') {
            score += 10;
            if (bowls[i + 2] == 'X') {
                score += 10;
            } else {
                score += bowls[i + 2] - '0';
            }
            i += 2;
        } else {
            score += bowls[i] - '0' + bowls[i + 1] - '0';
            i += 2;
        }
        frame++;
    }
    
    return score;
}

int main() {
    string bowls;
    cin >> bowls;
    
    int score = getScore(bowls);
    cout << score << endl;
    
    return 0;
}