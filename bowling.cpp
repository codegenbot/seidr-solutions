#include <iostream>
#include <string>
using namespace std;
int main() {
    string input;
    int score = 0;
    cin >> input;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == 'X') {
            score += 10;
        } else if (isdigit(input[i])) {
            score += input[i] - '0';
        }
    }
    cout << score << endl;
    return 0;
}