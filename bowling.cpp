#include <iostream>
#include <string>
using namespace std;
int getScore(string input) {
    int score = 0;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == 'X') {
            score += 10;
        } else if (input[i] >= '0' && input[i] <= '9') {
            score += input[i] - '0';
        }
    }
    return score;
}
int main() {
    string input;
    cin >> input;
    cout << getScore(input) << endl;
    return 0;
}