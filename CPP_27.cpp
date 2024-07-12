```cpp
#include <cassert>
#include <algorithm>
#include <string>
#include <initializer_list>

std::string filp_case(const std::string& str) {
    std::string result = "";
    for (char c : str) {
        if (c >= 'A' && c <= 'Z') {
            result += (char)(c + 32);
        } else if (c >= 'a' && c <= 'z') {
            result += (char)(c - 32);
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
}