std::vector<const char*> all_prefixes(const std::string& str) {
    std::vector<const char*> result;
    for (int i = 1; i <= str.length(); i++) {
        result.push_back(str.substr(0, i).c_str());
    }
    return result;
}