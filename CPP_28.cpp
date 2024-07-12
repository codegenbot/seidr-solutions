```cpp
#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::string concatenate(const std::vector<std::string>& strings) {
    std::string result = "";
    for (const auto& str : strings) {
        result += str;
    }
    return result;
}

int main() {
    std::vector<std::string> strings = {"x", "y", "z", "", ""}; 
    assert(concatenate(strings) == "xyz");
}