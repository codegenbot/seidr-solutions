#include <string>
#include <cassert>
using namespace std;

bool correct_bracketing(const string &brackets) {
    int balance = 0;
    for (char ch : brackets) {
        if (ch == '<') {
            balance++;
        } else if (ch == '>') {
            balance--;
            if (balance < 0) return false;
        }
    }
    return balance == 0;
}

int main() {
    assert(correct_bracketing("<><><<><>><>>><>") == false);
    return 0;
}