```cpp
#include <iostream>
#include <string>

bool is_nested(std::string str) {
    int open = 0, close = 0;
    for(char c : str) {
        if(c == '[') open++;
        else if(c == ']') close++;
        if(open > 0 && close > 0) return true;
    }
    return false;
}

int main() {
    std::cout << (is_nested("[[]]") ? "true" : "false") << std::endl;
    std::cout << (is_nested("[]]]]]]][[[[[]") ? "true" : "false") << std::endl;
    std::cout << (is_nested("[][]") ? "true" : "false") << std::endl;
    std::cout << (is_nested("[]") ? "true" : "false") << std::endl;
    std::cout << (is_nested("[[][]]") ? "true" : "false") << std::endl;
    std::cout << (is_nested("[[]][[") ? "true" : "false") << std::endl;

    return 0;
}