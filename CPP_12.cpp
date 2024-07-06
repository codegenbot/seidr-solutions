std::string longest(std::vector<std::string> strings, unsigned) {
    std::string result = strings[0];
    for (const auto& str : strings) {
        if (str.length() > result.length()) {
            result = str;
        }
    }
    return result;
}