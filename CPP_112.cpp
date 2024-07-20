#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

std::vector<std::string> reverse_delete(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    std::vector<std::string> result;
    for (const std::string &str : a) {
        std::string reversedStr = str;
        std::reverse(reversedStr.begin(), reversedStr.end());
        result.push_back(reversedStr);
    }
    for (const std::string &str : b) {
        result.push_back(str);
    }

    std::string combined = "";
    for (const std::string &str : a) {
        combined += str;
    }
    for (const std::string &str : b) {
        combined += str;
    }

    std::string reversedCombined = combined;
    std::reverse(reversedCombined.begin(), reversedCombined.end());

    assert(reversedCombined == "ammamia");

    return result;
}