#include <iostream>
#include <vector>
#include <string>

std::string concatenate(const std::vector<std::string>& strings) {
    std::string result;
    for (auto& str : strings) {
        result += str;
    }
    return result;
}