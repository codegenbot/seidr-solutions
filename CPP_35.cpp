#include <algorithm>
#include <vector>

auto max_pair = *std::max_element(p.begin(), p.end(), [](const auto& a, const auto& b) {
    return a.second < b.second;
});