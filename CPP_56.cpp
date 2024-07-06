#include <string>
using namespace std;

bool correct_bracketing(string brackets) {
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
    string brackets = "<><><<><>><>>><>";
    assert(not (correct_bracketing(brackets)));
    return 0;
}