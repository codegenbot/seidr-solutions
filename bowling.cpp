#include <iostream>
#include <string>
using namespace std;

int getScore(string input) {
    int score = 0;
    int frame = 0;
    int i = 0;

    while (frame < 10) {
        if (input[i] == 'X') {
            score += 10;
            score += (input[i + 1] == 'X') ? 10 : (isdigit(input[i + 1]) ? input[i + 1] - '0' : 0);
            score += (input[i + 2] == 'X') ? 10 : (isdigit(input[i + 2]) ? input[i + 2] - '0' : 0);
            i += 1;
        } else if (input[i + 1] == '/') {
            score += 10;
            score += (input[i + 2] == 'X') ? 10 : (isdigit(input[i + 2]) ? input[i + 2] - '0' : 0);
            i += 2;
        } else {
            score += (isdigit(input[i]) ? input[i] - '0' : 0);
            score += (isdigit(input[i + 1]) ? input[i + 1] - '0' : 0);
            i += 2;
        }
        frame++;
    }

    return score;
}

int main() {
    string input;
    cin >> input;

    int score = getScore(input);
    cout << score << endl;

    return 0;
}