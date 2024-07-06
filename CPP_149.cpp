```cpp
bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return false;
    for (const auto& str : a) {
        std::sort(str.begin(), str.end());
    }
    for (const auto& str : b) {
        std::sort(str.begin(), str.end());
    }
    return a == b;
}