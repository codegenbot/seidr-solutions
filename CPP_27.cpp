```cpp
#include <iostream>
#include <string>

std::string flip_case(const std::string& str) {
    std::string result = str; 
    for (char c : result) {
        if (c >= 'a' && c <= 'z') {
            result[0] = c + ('A' - 'a');
        } else if (c >= 'A' && c <= 'Z') {
            result[0] = c + ('a' - 'A');
        }
    }
    return result;
}

int main() {
    std::cout << flip_case("These violent delights have violent ends") << std::endl;
    return 0;
}