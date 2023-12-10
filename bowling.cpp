#include <iostream>
#include <string>
using namespace std;
int calculateScore(string input) {
    int score = 0;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == 'X') {
            score += 10;
        } else if (input[i] == '/') {
            score += 5;
        }
    }
    return score;
}
int main() {
    string input;
    cin >> input;
    cout << calculateScore(input) << endl;
    return 0;
}