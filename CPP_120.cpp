#include <algorithm>
#include <vector>

template <typename T>
T maximum(const std::vector<int>& numbers, const int& value) {
    auto it = std::lower_bound(numbers.begin(), numbers.end(), value, std::greater<int>());
    if (it != numbers.end()) {
        return *it;
    } else {
        return *std::max_element(numbers.begin(), numbers.end());
    }
}

int main() {
    assert(maximum(std::vector<int>{1, 2, 3, -23, 243, -400, 0}, 0) == 0);
    return 0;
}