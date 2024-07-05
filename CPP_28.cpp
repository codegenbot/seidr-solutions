```cpp
#include <string>
#include <vector>

std::string concatenate(std::vector<std::string> strings) {
    std::string result;
    for (auto s : strings)
        result += std::move(s);
    return result;
}