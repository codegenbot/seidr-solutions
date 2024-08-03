std::string kebabToCamel(const std::string& str) {
    size_t start = 0, end;

    while ((end = str.find(' ')) != std::string::npos) {
        if (start < end) {
            result += char(std::toupper(str[start]));
            start = end + 1;
        } else {
            result += str.substr(start, end - start);
            start = end + 1;
        }
    }

    if (start < str.size()) {
        if (!result.empty())
            result += char(std::toupper(str[start]));
        else
            result = str.substr(start);
    }

    return result;
}