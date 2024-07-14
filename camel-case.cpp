```cpp
#include <string>
#include <vector>

std::vector<std::string> split(const std::string& str, char c) {
    std::vector<std::string> tokens;
    size_t pos = 0;
    while ((pos = str.find(c)) != std::string::npos) {
        tokens.push_back(str.substr(0, pos));
        str.erase(0, pos + 1);
    }
    tokens.push_back(str);
    return tokens;
}

std::string camelCase(const std::string& str) {
    std::vector<std::string> segments = split(str, '-');
    std::string result;

    for (size_t i = 0; i < segments.size(); ++i) {
        if (i > 0) {
            result += toupper(segments[i][0]);
        } else {
            result += tolower(segments[i][0]);
        }
        result += segments[i].substr(1);
    }

    return result;
}