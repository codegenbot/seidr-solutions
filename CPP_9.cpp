#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) { return a == b; }

std::vector<int> rolling_max(std::vector<int> numbers) {
    std::vector<int> result;
    for (int i = 1; i < numbers.size() - 1; ++i) {
        result.push_back(std::max({numbers[i - 1], numbers[i], numbers[i + 1]}));
    }
    return result;
}

int main() {
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    return 0;
}