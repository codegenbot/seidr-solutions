```cpp
#include <string>
bool correct_bracketing(std::string s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '<') {
            count++;
        } else if (s[i] == '>') {
            if (count <= 0) {
                return false;
            }
            count--;
        }
    }
    return count == 0;
}
int main() {
    if (!correct_bracketing("<><><<><>><>>><>") ) {
        std::cout << "Invalid bracketing" << std::endl;
    }
}