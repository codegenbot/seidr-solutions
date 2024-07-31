```cpp
#include <cassert>
#include <string>

int filp_case(const char* str) {
    int result = 0;
    for (char c : std::string(str)) {
        if (c >= 'a' && c <= 'z') {
            result -= (c - 'a' + 1);
        } else if (c >= 'A' && c <= 'Z') {
            result += (c - 'A' + 1);
        }
    }
    return result;
}

int main() {
    assert(filp_case("These violent delights have violent ends") == 0);
    std::cout << "The case flip of the given string is: " << filp_case("These violent delights have violent ends");
    return 0;
}