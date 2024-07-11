#include <vector>
#include <cassert>

std::vector<int> rolling_max(std::vector<int> numbers) {
    std::vector<int> result;
    for (size_t i = 0; i < numbers.size(); ++i) {
        int left = (i == 0) ? numbers[0] : numbers[i - 1];
        int current = numbers[i];
        int right = (i == numbers.size() - 1) ? numbers[numbers.size() - 1] : numbers[i + 1];
        result.push_back(std::max({left, current, right}));
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    return 0;
}