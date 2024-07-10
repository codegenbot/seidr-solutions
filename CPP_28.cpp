#include <vector>
#include <string>
#include <cassert>

std::string concatenate(std::vector<std::string> strings) {
    std::string result = "";
    for (const auto& s : strings) {
        result += s;
    }
    return result;
}