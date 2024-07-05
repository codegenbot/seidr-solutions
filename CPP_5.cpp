#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> intersperse(std::vector<int> numbers, int delimeter) {
    std::vector<int> result;
    for (size_t i = 0; i < numbers.size(); ++i) {
        result.push_back(numbers[i]);
        if (i < numbers.size() - 1) {
            result.push_back(delimeter);
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(intersperse({2, 2, 2}, 2), {2, 2, 2, 2, 2}));
    std::cout << "Test passed!" << std::endl;
    return 0;
}