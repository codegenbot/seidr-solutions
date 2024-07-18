#include <string>
using namespace std;
bool correct_bracketing(string brackets) {
    int balance = 0;
    for (char bracket : brackets) {
        if (bracket == '(') {
            balance++;
        } else if (bracket == ')') {
            if (balance == 0) {
                return false;
            }
            balance--;
        }
    }
    return balance == 0;
}