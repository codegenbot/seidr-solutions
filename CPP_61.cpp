#include <iostream>
#include <string>
using namespace std;

bool correct_bracketing(string brackets) {
    int balance = 0;
    for(char ch : brackets) {
        if(ch == '(') {
            balance++;
        } else if(ch == ')') {
            balance--;
        }
        if(balance < 0) {
            return false;
        }
    }
    return balance == 0;
}

int main() {
    string input;
    cout << "Enter a string of brackets: ";
    cin >> input;
    if (correct_bracketing(input)) {
        cout << "The bracketing is correct." << endl;
    } else {
        cout << "The bracketing is incorrect." << endl;
    }
    return 0;
}