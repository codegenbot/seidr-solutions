```
#include <iostream>
using namespace std;

int main() {
    int score = 0;
    int frame = 1;
    string line;
    cin.ignore();
    
    while (frame <= 10) {
        getline(cin, line);
        if (line[0] == 'X') {
            score += 30;
            frame++;
        } else if (line[2] == '/') {
            score += 10 + (line[0] - '0' * 2);
            frame++;
        } else {
            int first = line[0] - '0';
            int second = line[1] - '0';
            score += first + second;
            if (second == 0) {
                frame++;
            } else {
                frame++;
                if (line[3] != '/') {
                    score += line[2] - '0' * 10;
                }
            }
        }
    }
    
    cout << "The total score is: " << score << endl;
    return 0;
}