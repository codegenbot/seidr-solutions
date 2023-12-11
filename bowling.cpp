#include <iostream>
#include <string>
using namespace std;

int calculateScore(string input) {
    int score = 0;
    int frame = 1;
    int throwIndex = 0;

    for (char c : input) {
        if (frame <= 10) {
            if (c == 'X') {
                score += 10;
                if (throwIndex < input.size() - 3 && frame <= 9) {
                    score += input.at(throwIndex + 1) == 'X' ? 10 : input.at(throwIndex + 1) - '0';
                    score += input.at(throwIndex + 2) == 'X' ? 10 : (input.at(throwIndex + 2) == '/' ? 10 - (input.at(throwIndex + 1) - '0') : input.at(throwIndex + 2) - '0');
                }
                throwIndex++;
                frame++;
            }
            else if (c == '/') {
                score += 10 - (input.at(throwIndex - 1) - '0');
                if (throwIndex < input.size() - 2 && frame <= 10) {
                    score += input.at(throwIndex + 1) == 'X' ? 10 : input.at(throwIndex + 1) - '0';
                }
                throwIndex++;
                frame++;
            }
            else {
                score += c - '0';
                if (throwIndex < input.size() - 1 && ((c - '0') + (input.at(throwIndex + 1) - '0') == 10 || frame == 10)) {
                    score += input.at(throwIndex + 1) == 'X' ? 10 : input.at(throwIndex + 1) == '/' ? 10 - (c - '0') : input.at(throwIndex + 1) - '0';
                }
                throwIndex++;
                frame += (throwIndex % 2 == 0);
            }
        }
        else {
            break;
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