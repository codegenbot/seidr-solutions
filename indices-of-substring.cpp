```
std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int targetLength = target.length();
    for (int i = 0; i < text.length() - targetLength + 1; i++) {
        if (text.substr(i, targetLength) == target) {
            indices.push_back(i);
        }
    }
    return indices;
}
```