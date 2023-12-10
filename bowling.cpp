#include <iostream>
#include <string>
using namespace std;
int score(string input) {
    int sum = 0;
    for (int i = 0; i < input.length(); i++) {
        char c = input[i];
        if (c == 'X') {
            sum += 10;
        } else if (c == '/') {
            sum += 5;
        } else if (isdigit(c)) {
            int num = c - '0';
            sum += num;
        }
    }
    return sum;
}
int main() {
    string input;
    cin >> input;
    cout << score(input) << endl;
    return 0;
}