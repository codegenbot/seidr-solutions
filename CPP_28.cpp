#include <vector>
#include <string>
#include <initializer_list>

std::vector<std::string> concatenate(const std::vector<std::string>& strings) {
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if (result.empty()) {
            result.push_back(str);
        } else {
            result.push_back(str + strings[0]);
        }
    }
    return result;