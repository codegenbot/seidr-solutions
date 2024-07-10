#include <iostream>
#include <string>

using namespace std;

int correct_bracketing(string brackets) {
    int open_count = 0;
    for (char bracket : brackets) {
        if (bracket == '<') {
            open_count++;
        } else if (bracket == '>') {
            if (open_count == 0) return 1;
            open_count--;
        }
    }
    return open_count == 0 ? 0 : 1;
}

int main() {
    cout << correct_bracketing("<><><<><>><>>><") << endl; 
    assert(!correct_bracketing("<><><<><>><>>><"));
    return 0;
}