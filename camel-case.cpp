std::string camelCase(const std::string& str) {
    if (str.empty())
        return "";

    std::string result;
    bool capitalize = true;

    for (const auto& segment : split(str, '-')) {
        if (!segment.empty()) {
            if (capitalize)
                result += toupper(segment[0]);
            else
                result += segment.substr(1);
            capitalize = !capitalize;
        }
    }

    return result;
}