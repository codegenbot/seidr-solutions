std::vector<int> indicesOfSubstring(const string& text, const string& target) {
    std::vector<int> result;
    for (size_t i = 0; i < text.length(); ++i) {
        if (text.substr(i, target.length()) == target) {
            result.push_back(i);
        }
    }
    return result;
}