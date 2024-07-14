```cpp
std::string camelCase(const std::string& str) {
    std::vector<std::string> segments = split(str, '-');
    std::string result;
    for (size_t i = 0; i < segments.size(); ++i) {
        if (!result.empty()) {
            result[0] = toupper(result[0]);
        }
        result += tolower(segments[i]);
    }
    return result;
}