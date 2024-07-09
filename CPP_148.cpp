```cpp
bool issame(std::vector<std::string> a, std::vector<std::string> bf) { 
    if (a.size() != bf.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != bf[i]) return false;
    }
    return true;
}