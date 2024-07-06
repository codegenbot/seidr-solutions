#include <string>

bool correct_bracketing(std::string brackets) {
    int count = 0;
    for (char bracket : brackets) {
        if ((bracket == '(') || (bracket == '{') || (bracket == '<')) {
            count++;
        } else if ((bracket == ')') || (bracket == '}') || (bracket == '>')) {
            if (count > 0)
                count--;
            else
                return false; 
        }
    }
    return count == 0;
}

int main() {
    assert(not (correct_bracketing("<><><<><>><>>><>")));
    return 0;
}