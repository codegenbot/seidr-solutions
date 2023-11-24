#include <iostream>
#include <string>
using namespace std;

int scoreOfRound(string input) {
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
                score += (input[i + 1] == 'X') ? 10 : ((input[i + 1] == '/') ? 10 - (input[i + 2] - '0') : (input[i + 1] - '0'));
                score += (input[i + 2] == 'X') ? 10 : ((input[i + 2] == '/') ? 10 - (input[i + 3] - '0') : (input[i + 2] - '0'));
                bowlIndex += 1;
            }
            frame++;
        } else if (input[i] == '/') {
            score += 10 - (input[i - 1] - '0');
            if (frame < 10) {
                score += (input[i + 1] == 'X') ? 10 : (input[i + 1] - '0');
                bowlIndex += 2;
            }
            frame++;
        } else {
            score += input[i] - '0';
            if (frame < 10) {
                if (bowlIndex % 2 == 0) {
                    if (input[i] - '0' + input[i - 1] - '0' == 10) {
                        score += (input[i + 1] == 'X') ? 10 : (input[i + 1] - '0');
                    }
                    bowlIndex += 1;
                } else {
                    bowlIndex += 1;
                }
            }
            if (bowlIndex % 2 == 0) {
                frame++;
            }
        }
    }

    return score;
}

int main() {
    string input;
    cin >> input;
    cout << scoreOfRound(input) << endl;
    return 0;
}