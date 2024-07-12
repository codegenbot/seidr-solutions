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
    std::vector<std::string> strings(5);
    strings.push_back("x");
    strings.push_back("y");
    strings.push_back("z");
    strings.push_back("w");
    strings.push_back("k");
    assert(concatenate(strings) == "xyzwk");
}