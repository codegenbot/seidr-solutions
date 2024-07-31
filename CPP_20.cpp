#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b){
    if (a.size() != b.size()) {
        return false;
    }
    
    for (size_t i = 0; i < a.size(); ++i) {
        if (std::abs(a[i] - b[i]) > 0.0001) {
            return false;
        }
    }
    
    return true;
}

std::vector<float> find_closest_elements(std::vector<float> elements) {
    std::vector<float> closest_elements;
    
    if (elements.size() < 2) {
        return closest_elements;
    }
    
    float min_diff = std::abs(elements[0] - elements[1]);
    
    for (size_t i = 0; i < elements.size() - 1; ++i) {
        float diff = std::abs(elements[i] - elements[i + 1]);
        if (diff < min_diff) {
            min_diff = diff;
            closest_elements = {elements[i], elements[i + 1]};
        }
    }
    
    return closest_elements;
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1});
    assert(issame(find_closest_elements({1.5, 2.5, 3.5, 4.5}), {3.5, 4.5});
    assert(issame(find_closest_elements({10.0, 20.0, 30.0, 40.0, 50.0}), {10.0, 20.0});
    
    return 0;
}