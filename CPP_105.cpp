#include <vector>
#include <string>

std::vector<std::string> by_length(std::vector<std::string> arr) {
    std::vector<std::string> result;
    for (const auto& str : arr) {
        if (str.length() >= 1 && str.length() <= 9) {
            result.push_back(str);
        }
    }

    return result;
}