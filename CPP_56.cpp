```cpp
#include <string>
bool correct_bracketing(std::string s);
int main() {
    if (!correct_bracketing("<><><<><>><>>><>") ) {
        std::cout << "Invalid bracketing" << std::endl;
    }
}

bool correct_bracketing(std::string s) {
    int count = 0;
    for (char c : s) {
        if (c == '<') {
            count++;
        } else if (c == '>') {
            if (count <= 0) {
                return false;
            }
            count--;
        }
    }
    return count == 0;
}