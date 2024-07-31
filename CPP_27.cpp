```cpp
#include <iostream>
#include <string>

int filp_case(const std::string& str) {
    int result = 0;
    for (char c : str) {
        if (c >= 'a' && c <= 'z') {
            result += (c - 'a' + 1);
        } else if (c >= 'A' && c <= 'Z') {
            result -= (c - 'A' + 1);
        }
    }
    return result;
}

int main() {
    int result = filp_case("These violent delights have violent ends");
    assert(result == 0);
    return 0;
}