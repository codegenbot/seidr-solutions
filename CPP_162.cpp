#include <iostream>
#include <string>
#include <functional>

std::size_t string_to_md5(const std::string& text) {
    if (text.empty()) {
        return 0;
    }
    
    std::hash<std::string> hasher;
    return hasher(text);
}

int main() {
    std::size_t md5_value = string_to_md5("password");
    std::cout << md5_value << std::endl;
    return 0;
}