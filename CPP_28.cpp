#include <vector>

std::vector<std::string> concatenate(const std::vector<std::string>& strings) {
    std::vector<std::string> result;
    for (const auto& str : strings) {
        result.push_back(str + "\n");
    }
    return result; 
}