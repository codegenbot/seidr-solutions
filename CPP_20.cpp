#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return (a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin()));
}

void find_closest_elements(const std::vector<float>& elements, std::vector<float>& closest_elements) {
    std::vector<float> sorted_elements = elements;
    std::sort(sorted_elements.begin(), sorted_elements.end());
    closest_elements.push_back(sorted_elements[0]);
    closest_elements.push_back(sorted_elements[1]);
}

int main() {
    std::vector<float> closest;
    find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}, closest);
    
    if (!issame(closest, {1.1, 2.2})) {
        std::cout << "Test failed" << std::endl;
    } else {
        std::cout << "Test passed" << std::endl;
    }

    return 0;
}