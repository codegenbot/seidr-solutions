#include <string>

bool correct_bracketing(std::string brackets) {
    int open = 0, close = 0;
    for (char c : brackets) {
        if (c == '<') open++;
        else if (c == '>') close++;
    }
    return open == close;
}