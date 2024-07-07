```cpp
#include <iostream>
#include <string>

std::string flipCase(const std::string& str) -> const std::string {
    std::string result;
    for (char c : str) {
        (c >= 'a' && c <= 'z') ? (result += (char)(c - 32)) : ((c >= 'A' && c <= 'Z') ? (result += (char)(c + 32)) : (result += c));
    }
    return result;
}

int main() {
    try {
        std::cout << flipCase("These violent delights have violent ends") << std::endl;
    } catch (...) {
        std::cerr << "An error occurred." << std::endl;
    }
    assert(flipCase("These violent delights have violent ends") == "these violent delights have violent ends");
    return 0;
}