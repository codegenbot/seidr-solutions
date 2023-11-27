#include <iostream>
#include<string>
using namespace std;

bool correct_bracketing(string brackets) {
    int count = 0;
    
    for (char c : brackets) {
        if (c == '<') {
            count++;
        }
        else if (c == '>') {
            if (count == 0) {
                return false;
            }
            count--;
        }
    }
    
    return count == 0;
}

int main() {
    cout << correct_bracketing("<") << endl;
    cout << correct_bracketing("<>") << endl;
    cout << correct_bracketing("<<><>>") << endl;
    cout << correct_bracketing("><<>") << endl;
    
    return 0;
}