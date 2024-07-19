#include <vector>
#include <algorithm>
#include <cassert>

bool issame(vector<int> a, vector<int> b);

std::vector<int> rolling_max(std::vector<int> numbers);

bool issame(std::vector<int> a, std::vector<int> b) { return a == b; }

std::vector<int> rolling_max(std::vector<int> numbers) {
    std::vector<int> result;
    int maxNum = numbers[0];
    for (int i = 0; i < numbers.size(); ++i) {
        maxNum = std::max(maxNum, numbers[i]);
        result.push_back(maxNum);
    }
    return result;
}

int main() {
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
}