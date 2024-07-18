#include <string>
using namespace std;

bool correct_bracketing(string brackets){
    int counter = 0;
    for (char c : brackets) {
        if (c == '(') {
            counter++;
        } else if (c == ')') {
            counter--;
        }
        if (counter < 0) {
            return false;
        }
    }
    return counter == 0;
}