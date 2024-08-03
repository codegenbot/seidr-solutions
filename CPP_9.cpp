#include <cassert>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b);
std::vector<int> rolling_max(std::vector<int> numbers);

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> rolling_max(std::vector<int> numbers) {
    std::vector<int> result;
    int maxSoFar = INT_MIN;
    for (int i = 0; i < numbers.size(); i++) {
        maxSoFar = std::max(maxSoFar, numbers[i]);
        result.push_back(maxSoFar);
    }
    return result;
}

int main() {
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    return 0;
}