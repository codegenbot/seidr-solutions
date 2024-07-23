#include <iostream>
#include <vector>
#include <cassert>

std::pair<float, float> find_closest_elements(const std::vector<float>& elements) {
    // Implement the logic to find the closest elements here
    return std::make_pair(elements[0], elements[1]); // returning dummy values for demonstration
}

bool issame(const std::pair<float, float>& a, const std::pair<float, float>& b) {
    return a == b;
}

int main(){
    assert(issame(find_closest_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}), std::make_pair(1.1f, 2.2f));
    return 0;
}