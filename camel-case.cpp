```cpp
#include <string>

std::string split(const std::string& str, char delimiter) {
    std::string result = "";
    size_t start = 0;
    size_t end = str.find(delimiter);

    while (end != std::string::npos) {
        if (start > 0) {
            result += str.substr(start, end - start);
        }
        start = end + 1;
        end = str.find(delimiter, start);
    }

    if (start < str.size()) {
        result += str.substr(start);
    }

    return result;
}

std::string camelCase(const std::string& str) {
    std::vector<std::string> segments = split(str, '-');
    std::string result;

    for (size_t i = 0; i < segments.size(); ++i) {
        if (!result.empty()) {
            result[0] = toupper(result[0]);
        }
        if (i > 0) {
            result += tolower(segments[i][0]);
        } else {
            result += segments[i];
        }
    }

    return result;
}