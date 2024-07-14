#include <string>
#include <vector>
#include <cctype>

std::string camelCase(const std::string& str) {
    std::vector<std::string> segments = split(str, '-');
    std::string result;
    for (size_t i = 0; i < segments.size(); ++i) {
        if (!result.empty()) {
            result[0] = std::toupper(result[0]);
        }
        if (i > 0) {
            result += std::tolower(segments[i][0]);
        } else {
            result += segments[i];
        }
    }
    return result;
}