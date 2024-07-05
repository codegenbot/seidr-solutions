#include <vector>
#include <iostream>
#include <cassert>

std::vector<int> intersperse(std::vector<int> numbers, int delimeter) {
    std::vector<int> result;
    for (size_t i = 0; i < numbers.size(); ++i) {
        if (i > 0) result.push_back(delimeter);
        result.push_back(numbers[i]);
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(intersperse({2, 2, 2}, 2), {2, 2, 2, 2, 2}));
    std::cout << "All tests passed!\n";
    return 0;
}