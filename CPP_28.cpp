#include <string>
#include <vector>

std::string concatenate(const std::vector<std::string>& strings){
    std::string result = "";
    for (const auto &s : strings) {
        result += s;
    }
    return result;
}