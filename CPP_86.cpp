```cpp
#include <iostream>
#include <string>

std::string anti_shuffle(std::string s) {
    // your implementation here
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);  
    std::string res = anti_shuffle(str);
    std::cout << "Anti-Shuffled String: " << res << std::endl;
    return 0;
}