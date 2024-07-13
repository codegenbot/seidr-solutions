```cpp
std::vector<std::size_t> indicesOfSubstring(std::string text, std::string target) {
    std::vector<std::size_t> result;
    size_t n = text.length();
    size_t m = target.length();

    for (size_t i = 0; i <= n - m; i++) {
        if ((text.find(target, i)) != std::string::npos) { 
            result.push_back(i); 
        }
    }
    return result;
}