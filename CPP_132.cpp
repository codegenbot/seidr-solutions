#include <iostream>
#include <string>

bool is_nested(std::string str) {
    int count = 0;
    for (char c : str) {
        if (c == '[') {
            count++;
        }
        else if (c == ']') {
            count--;
        }
        if (count < 0) {
            return true;
        }
    }
    return false;
}

int main() {
    std::cout << std::boolalpha;
    std::cout << is_nested("[[]]") << std::endl;
    std::cout << is_nested("[[[]]]") << std::endl;
    std::cout << is_nested("[]]") << std::endl;
    std::cout << is_nested("]]]]]]]]") << std::endl;

    return 0;
}