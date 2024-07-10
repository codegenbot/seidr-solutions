#include <vector>
#include <utility>
#include <cassert>

std::pair<int, int> sum_product(const std::pair<int, int>& numbers);

bool issame(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return a.first == b.first && a.second == b.second;
}