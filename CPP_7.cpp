std::vector<std::string> filter_by_substring(std::vector<std::string> arr, std::string sub) {
    std::vector<std::string> result;
    for (const auto& str : arr) {
        if (str.find(sub) != std::string::npos) result.push_back(str);
    }
    return result;
}