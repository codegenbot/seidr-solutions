#include <iostream>
using namespace std;

bool correct_bracketing(string brackets) {
    int count = 0;
    for (char c : brackets) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            if (count == 0)
                return false;
            count--;
        }
    }
    return count == 0;
}

int main() {
    string s = "()()(()())()))";
    assert(not correct_bracketing(s));
    return 0;
}