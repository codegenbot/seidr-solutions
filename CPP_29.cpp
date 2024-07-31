```cpp
bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::pair<std::string, std::string>> filter_by_prefix(const std::vector<std::string>& strings, const std::string& prefix) {
    std::vector<std::pair<std::string, std::string>> result;
    for (const auto& s : strings) {
        if (s.find(prefix) == 0)
            result.push_back({prefix, s});
    }
    return result;
}