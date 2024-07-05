#include <iostream>
#include <string>
using namespace std;

bool correct_bracketing(string brackets) {
    int count = 0;
    for (char c : brackets) {
        if (c == '<') {
            count++;
        } else if (c == '>') {
            count--;
        }
        if (count < 0) {
            return false;
        }
    }
    return count == 0;
}

int main() {
    string brackets;
    cin >> brackets;
    if (correct_bracketing(brackets)) {
        cout << "Correctly bracketed." << endl;
    } else {
        cout << "Incorrectly bracketed." << endl;
    }
    return 0;
}