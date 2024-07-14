```cpp
#include <vector>
#include <string>

#ifdef __cplusplus
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wc99-compat"
    #pragma GCC diagnostic ignored "-Wtraditional"
    #define _GNU_SOURCE
#endif

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != std::string::npos) {
        result.push_back(pos);
        pos += 1; // to avoid infinite loop
    }
    return result;
}