#include <algorithm>
#include <cassert>
#include <vector>

template <typename T>
T maximum(const std::vector<int>& numbers, const int& value) {
    auto iter = std::max_element(numbers.begin(), numbers.end());
    while(iter != numbers.end() && *iter > value) {
        --iter;
    }
    return *iter;
}

int main() {
    assert(maximum(std::vector<int>{1, 2, 3, -23, 243, -400, 0}, 0) == 0);
    return 0;
}