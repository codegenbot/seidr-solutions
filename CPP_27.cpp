```cpp
#include <iostream>
#include <string>

std::string filp_case(const std::string& str) {
    std::string result = "";
    for (char c : str) {
        if (c >= 'a' && c <= 'z') {
            result += (c - 32);
        } else if (c >= 'A' && c <= 'Z') {
            result += (c + 32);
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    std::cout << filp_case("These violent delights have violent ends") << std::endl;
    return 0;
}