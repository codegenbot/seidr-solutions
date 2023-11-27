#include <iostream>
#include <string>
using namespace std;

int calculateScore(string input) {
    int score = 0;
    int frame = 1;
    int roll = 1;

    for (int i = 0; i < input.size(); i++) {
        if (frame > 10) {
            break;
        }

        if (input[i] == 'X') {
            score += 10;
            if (frame < 10) {
                score += (input[i + 1] == 'X') ? 10 : (isdigit(input[i + 1]) ? input[i + 1] - '0' : 0);
                score += (input[i + 2] == 'X') ? 10 : (isdigit(input[i + 2]) ? input[i + 2] - '0' : 0);
            } else {
                score += (input[i + 1] == 'X') ? 10 : ((input[i + 1] == '/') ? 10 - (input[i - 1] - '0') : (isdigit(input[i + 1]) ? input[i + 1] - '0' : 0));
                score += (input[i + 2] == 'X') ? 10 : ((input[i + 2] == '/') ? 10 - (input[i + 1] - '0') : (isdigit(input[i + 2]) ? input[i + 2] - '0' : 0));
            }
            frame++;
        } else if (input[i] == '/') {
            score += 10 - (input[i - 1] - '0');
            score += (i + 1 < input.size() ? ((input[i + 1] == 'X') ? 10 : (isdigit(input[i + 1]) ? input[i + 1] - '0' : 0)) : 0);
            frame++;
            roll = 1;
        } else {
            score += input[i] - '0';
            if (roll == 1) {
                roll++;
            } else {
                roll = 1;
                frame++;
            }
        }
    }

    return score;
}

int main() {
    string input;
    cin >> input;
    int result = calculateScore(input);
    cout << result << endl;
    return 0;
}