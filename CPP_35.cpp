#include <algorithm>
#include <vector>

int max_value = *std::max_element(p.begin(), p.end(), [](const auto& a, const auto& b) {
    return a.second < b.second;
})->second;

int min_value = std::min_element(p.begin(), p.end())->first;