#include <vector>
#include <string>

std::string concatenate(const std::vector<std::string>& strings) {
    if (strings.empty()) {
        return "Error: Input vector is empty!";
    }
    std::string result = "";
    for (const auto& str : strings) {
        result += str;
    }
    return result;
}