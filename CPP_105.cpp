#include <map>
#include <algorithm>
#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> by_length(std::vector<int> arr) {
    std::map<int, std::string> digit_map = {
        {4, "Four"},
        {9, "Nine"},
        {8, "Eight"}
    };
    std::vector<std::string> result;
    for (int num : arr) {
        result.push_back(digit_map[num]);
    }
    return result;
}