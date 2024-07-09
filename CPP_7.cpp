```
std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
    vector<string> result;
    for (const auto& s : strings) {
        if (s.find(substring) != string::npos) {
            result.push_back(s);
        }
    }
    return result;
}