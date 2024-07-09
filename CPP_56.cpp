```cpp
#include <cassert>
#include <string>

bool correct_bracketing(const char* str) {
    int count = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] == '<') count++;
        else if (str[i] == '>') {
            if (count <= 0) return false;
            count--;
        }
    }
    return count == 0;
}

int main() {
    std::string brackets;
    std::cin >> brackets;
    if(correct_bracketing(brackets.c_str())) std::cout << "Correct" << std::endl;
    else std::cout << "Incorrect" << std::endl;
    return 0;
}