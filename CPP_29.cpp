std::vector<string> filter_by_prefix(std::vector<string> strings, string prefix){
    std::vector<string> result;
    for (const auto &str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;