#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> rolling_max(std::vector<int> numbers);

int main() {
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    return 0;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> rolling_max(std::vector<int> numbers){
    std::vector<int> result;
    int n = numbers.size();
    for (int i = 0; i < n; ++i) {
        int max_val = numbers[i];
        for (int j = i + 1; j < n; ++j) {
            max_val = std::max(max_val, numbers[j]);
        }
        result.push_back(max_val);
    }
    return result;
}