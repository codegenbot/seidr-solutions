#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool correct_bracketing(string brackets) {
    stack<char> s;
    for (const auto& bracket : brackets) {
        if (bracket == '(') {
            s.push(bracket);
        } else if (bracket == ')' && !s.empty()) {
            s.pop();
        } else {
            return false;
        }
    }
    return s.empty();
}

int main() {
    string input;
    cout << "Enter a string of brackets: ";
    cin >> input;
    
    if (correct_bracketing(input)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    
    return 0;
}