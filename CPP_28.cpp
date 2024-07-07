```cpp
#include <vector>
#include <string>

std::vector<std::string> concatenate(const std::vector<std::string>& strings) {
    std::vector<std::string> result;
    for (const auto& str : strings) {
        result.push_back(str);
    }
    return result; 
}

assert(concatenate({"x", "y", "z", "w", "k"}) == {"xy", "yz", "zw", "wk"});