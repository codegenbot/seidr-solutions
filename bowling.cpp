#include <iostream>
using namespace std;

int main() {
    string input;
    cin >> input;

    int score = 0;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == 'X') {
            // Add 10 points for the strike, plus the number of pins left standing after the previous roll
            score += 10 + (i > 0 ? input[i - 1] - '0' : 0);
        } else if (input[i] >= '0' && input[i] <= '9') {
            // Add the number of pins knocked down on this roll to the score
            score += input[i] - '0';
        }
    }

    cout << "Score: " << score << endl;

    return 0;
}