#include <string>
#include <vector>
#include <algorithm>

std::pair<std::string, bool> issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    std::string result = "";
    for (const std::string& str : a) {
        result += str;
    }

    std::string result_reverse = result;
    std::reverse(result_reverse.begin(), result_reverse.end());
    
    return {result, result == result_reverse};
}