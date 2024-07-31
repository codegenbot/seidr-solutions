#include <vector>
#include <algorithm>
#include <cassert>
#include <limits>

std::vector<int> rolling_max(std::vector<int> numbers) {
    std::vector<int> result;
    int max_num = std::numeric_limits<int>::min();
    for (int i = 0; i < numbers.size(); ++i) {
        max_num = std::max(max_num, numbers[i]);
        result.push_back(max_num);
    }
    return result;
}

bool is_same(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

assert(is_same(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));