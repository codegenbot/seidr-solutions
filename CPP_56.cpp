#include <initializer_list>
#include <cassert>
#include <stack>
#include <iostream>

int main() {
    if (!correct_bracketing("<><><<><>><>>><>") ) {
        std::cout << "Invalid bracketing" << std::endl;
    }
}