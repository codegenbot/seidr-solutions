#include <vector>
#include <cassert>
#include <algorithm>

std::vector<int> rolling_max(std::vector<int> numbers) {
    std::vector<int> result;
    int max_num = 0;
    for (int i = 0; i < numbers.size(); ++i) {
        max_num = std::max(max_num, numbers[i]);
        result.push_back(max_num);
    }
    return result;
}

bool is_same(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(is_same(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
}