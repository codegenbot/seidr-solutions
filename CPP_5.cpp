#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> intersperse(const std::vector<int>& numbers, int delimeter) {
    std::vector<int> result;
    for (size_t i = 0; i < numbers.size(); ++i) {
        result.push_back(numbers[i]);
        if (i < numbers.size() - 1) {
            result.push_back(delimeter);
        }
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(intersperse({2, 2, 2}, 2), {2, 2, 2, 2, 2}));
    assert(issame(intersperse({1, 2, 3}, 0), {1, 0, 2, 0, 3}));
    std::cout << "All tests passed!" << std::endl;
    return 0;
}