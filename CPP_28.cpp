#include <vector>

std::vector<std::string> concatenate(const std::vector<std::string>& strings) {
    std::string result = "";
    for (const auto& str : strings) {
        result += str + "\n";
    }
    return {result}; 
}