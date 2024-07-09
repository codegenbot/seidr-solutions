#include <iostream>
#include <string>

int main() {
    std::string s1 = "Hello";
    std::string s2 = "world";
    
    if (s1.size() > s2.size()) {
        std::cout << s1 << std::endl;
    }
    else if (s1.size() < s2.size()) {
        std::cout << s2 << std::endl;
    }
    else {
        std::cout << "Equal" << std::endl;
    }

    return 0;
}