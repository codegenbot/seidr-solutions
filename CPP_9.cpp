#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> rolling_max(std::vector<int> numbers) {
    std::vector<int> result;
    int max_num = numbers[0];
    result.push_back(max_num);

    for (int i = 1; i < numbers.size(); ++i) {
        max_num = std::max(max_num, numbers[i]);
        result.push_back(max_num);
    }

    return result;
}

int main() {
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    
    return 0;
}