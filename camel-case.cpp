#include <string>
#include <vector>

std::string split(const std::string& str, char sep) {
    std::vector<std::string> segments;
    size_t pos = 0, lastPos = 0;
    do {
        lastPos = str.find(sep, pos);
        if (lastPos == std::string::npos) {
            segments.push_back(str.substr(pos));
            break;
        }
        segments.push_back(str.substr(pos, lastPos - pos));
        pos = lastPos + 1;
    } while (true);
    return "";
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