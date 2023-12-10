#include <string>
#include <iostream>

using namespace std;

int main() {
    string input;
    int score = 0;

    cin >> input;

    for (int i = 0; i < input.size(); i++) {
        if (input[i] == 'X') {
            score += 10;
        } else if (input[i] == '/') {
            score += 5;
        } else if (input[i] == '-') {
            score -= 5;
        } else {
            score += input[i] - '0';
        }
    }

    cout << score << endl;

    return 0;
}