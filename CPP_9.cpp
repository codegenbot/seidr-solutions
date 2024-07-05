#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> rolling_max(const std::vector<int>& numbers) {
    std::vector<int> result;
    int current_max = numbers[0];
    for(int num : numbers) {
        if(num > current_max) {
            current_max = num;
        }
        result.push_back(current_max);
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    std::cout << "All tests passed!" << std::endl;
    return 0;
}