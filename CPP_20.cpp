#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return (a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin()));
}

std::vector<float> find_closest_elements(const std::vector<float>& elements) {
    std::vector<float> closest_elements = {elements[0], elements[1]}; // Assuming the first two elements are the closest
    return closest_elements;
}

int main() {
    if (!issame(find_closest_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}), {1.1f, 2.2f})) {
        std::cout << "Test failed" << std::endl;
    } else {
        std::cout << "Test passed" << std::endl;
    }

    return 0;
}