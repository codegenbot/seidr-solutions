std::string concatenate(std::vector<std::string> strings) {
    std::string result = "";
    for (const auto& str : strings) {
        if (!str.empty()) {
            result += str + ", ";
        }
    }
    return result.substr(0, result.find(",") == std::string::npos ? result.size() - 1 : result.find(","));
}