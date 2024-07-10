#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    if (v1.size() != v2.size()) return false;
    for (int i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) return false;
    }
    return true;
}

int main_test() {
    std::pmr::vector<int> input = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    auto output = input; // Create a copy of the input vector
    auto uniqueOutput = std::unique(output.begin(), output.end()); // Use std::unique to get the unique elements
    for (auto i = output.begin(); i != uniqueOutput; ++i) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;

    assert(std::equal(output.begin(), output.end(), input.begin()) == input.end());

    return 0;
}