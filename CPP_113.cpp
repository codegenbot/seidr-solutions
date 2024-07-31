#include <vector>
#include <string>
#include <cassert>
#include <algorithm>

int count_odd(const std::string& str) {
    return std::count_if(str.begin(), str.end(), [](char c) { return (c - '0') % 2 != 0; });
}

std::vector<int> odd_count(const std::vector<std::string>& strs) {
    std::vector<int> counts;
    for (const auto& str : strs) {
        counts.push_back(count_odd(str));
    }
    return counts;
}

int main() {
    assert(odd_count({"271", "137", "314"}) == std::vector<int>{2, 3, 2});
}