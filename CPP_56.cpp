#include <string>

bool correct_bracketing(string brackets) {
    int opening = 0;
    for (char bracket : brackets) {
        if (bracket == '<') {
            opening++;
        } else if (bracket == '>') {
            if (opening == 0)
                return false;
            opening--;
        }
    }
    return opening == 0;
}