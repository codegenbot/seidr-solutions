#include <string>
using namespace std;

bool correct_bracketing(const string& brackets) {
    int count_open = 0;
    for (char c : brackets) { 
        if (c == '<') {
            count_open++;
        } else if (c == '>') {
            if (count_open == 0)
                return false;
            count_open--;
        }
    }
    return count_open == 0;
}

int main() {
    assert(!correct_bracketing("<><><<><>><>>><>"));
    return 0;
}