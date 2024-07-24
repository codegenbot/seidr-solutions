```
#include <string>
#include <vector>

bool assert(const std::vector<std::string>& strings) {
    return concatenate(strings) == "hellohello";
}

std::string concatenate(const std::vector<std::string>& strings) {
    std::string result = "";
    for (const auto& str : strings) {
        result += str;
    }
    return result;
}