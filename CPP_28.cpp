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
    std::vector<std::string> v;
    v.push_back("x");
    v.push_back("y");
    v.push_back("z");
    v.push_back("w");
    v.push_back("k");
    assert(concatenate(v) == "xyzwk");
}