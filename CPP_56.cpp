#include <string>
using namespace std;

bool correct_bracketing(string brackets) {
    int open = 0;
    for (char bracket : brackets) {
        if (bracket == '<') {
            open++;
        } else if (bracket == '>') {
            if (open == 0)
                return false;
            open--;
        }
    }
    return open == 0;
}