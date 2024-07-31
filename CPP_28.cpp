#include <string>
#include <vector>

std::string concatenate(const std::vector<std::string>& strings) {
    std::string result;
    for (const std::string& str : strings) {
        result += str;
    }
    return result;
}