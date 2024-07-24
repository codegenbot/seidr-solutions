#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

std::string find_max(std::vector<std::string> words) {
    std::string result = *std::minmax_element(words.begin(), words.end(),
        [](const std::string& a, const std::string& b) {
            return (a.size() << 8) + std::count(a.begin(), a.end(), std::unique_copy(a.begin(), a.end())) <
                   (b.size() << 8) + std::count(b.begin(), b.end(), std::unique_copy(b.begin(), b.end()));
        }).first;
    return result;
}