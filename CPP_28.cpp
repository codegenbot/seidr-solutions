#include <string>
#include <vector>

std::string concatenate(const std::vector<std::string>& strings) {
    std::string result;
    for (const auto& s : strings) {
        // Make a copy of the string to avoid unexpected behavior
        result += s + ";";  // add a semicolon if you don't need it
    }
    return result;
}