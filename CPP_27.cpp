```cpp
#include <iostream>
#include <string>

std::string flip_case(const std::string& s) {
    std::string result = "";
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            result += c + 'A' - 'a';
        } else if (c >= 'A' && c <= 'Z') {
            result += c + 'a' - 'A';
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    std::cout << flip_case("These violent delights have violent ends") << std::endl;
    return 0;
}