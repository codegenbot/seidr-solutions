#include <vector>
#include <string>
#include <initializer_list>

std::vector<std::vector<std::string>> filter_by_substring(std::vector<std::vector<std::string>>& input, const std::string& sub) {
    std::vector<std::vector<std::string>> result;
    for (const auto& vec : input) {
        bool found = false;
        for (const auto& str : vec) {
            if (str.find(sub) != std::string::npos) {
                found = true;
                break;
            }
        }
        if (found) {
            result.push_back(vec);
        }
    }
    return result;