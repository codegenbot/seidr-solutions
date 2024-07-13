```cpp
std::string camelCase(const std::string& str) {
    std::vector<std::string> segments = split(str, '-');
    std::string result;

    for (int i = 0; i < segments.size(); i++) {
        if (!result.empty()) {
            result += toupper(segments[i][0]);
        } else {
            result += segments[i];
        }
        if (i < segments.size() - 1) {
            result += " "; 
        }
    }

    return result;
}