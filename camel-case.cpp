std::string kebabToCamel(const std::string& str) {
    size_t start = 0, end;

    while ((end = str.find(' ')) != std::string::npos) {
        if (start != end) {
            result += char(std::toupper(str[start]));
            result += str.substr(start + 1, end - start - 1);
        } else {
            result = "Error";
            break;
        }
        start = end + 1;
    }

    if (start < str.size()) {
        result += char(std::toupper(str[start]));
        result += str.substr(start + 1);
    }

    return result;
}