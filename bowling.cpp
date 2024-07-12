#include <iostream>
using namespace std;

int calculateScore(string input) {
    int score = 0;
    int frame = 0;
    for (int i = 0; i < input.size(); ++i) {
        if (input[i] == 'X') {
            score += 10;
            if (input[i + 2] == 'X') {
                score += 10 + (input[i + 4] == 'X' ? 10 : input[i + 4] - '0');
            } else {
                score += (input[i + 2] == '/' ? 10 : input[i + 2] - '0') + (input[i + 3] == '/' ? 10 : input[i + 3] - '0');
            }
            frame++;
        } else if (input[i] == '/') {
            score += 10 - (input[i - 1] - '0');
        } else if (input[i] == '-') {
            // do nothing
        } else {
            score += input[i] - '0';
            if (input[i + 1] == '/') {
                score += 10 - (input[i] - '0');
            }
        }
        if (frame == 10) break;
    }
    return score;
}

int main() {
    string input;
    cin >> input;
    cout << calculateScore(input) << " " << endl;
    return 0;
}