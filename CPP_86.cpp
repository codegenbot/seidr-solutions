#include <iostream>
#include <string>

std::string anti_shuffle(std::string str);

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;
    std::string res = anti_shuffle(str);
    std::cout << "Anti-Shuffled String: " << res << std::endl; 
    return 0;
}