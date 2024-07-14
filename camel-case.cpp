```c++
std::string camelCase(const std::string& str) {
    std::vector<std::string> segments = split(str, '-');
    std::string result;

    for (int i = 0; i < segments.size(); i++) {
        if (!result.empty()) {
            result += toupper(segments[i][0]);
        } else {
            result += tolower(segments[i][0]);
        }
        if (i > 0) { 
            result += segments[i].substr(1);
        }
    }

    return result;
}