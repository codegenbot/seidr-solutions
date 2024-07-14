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