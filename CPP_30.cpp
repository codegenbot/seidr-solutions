#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
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

std::vector<float> get_positive(std::vector<float> v) {
    std::vector<float> result;
    for (float elem : v) {
        if (elem > 0) {
            result.push_back(elem);
        }
    }
    return result;
}

int main() {
    // Example usage
    std::vector<float> vec1 = {1.1, 2.2, 3.3};
    std::vector<float> vec2 = {1.1, 2.21, 3.3};

    if (issame(vec1, vec2)) {
        std::cout << "Vectors are the same." << std::endl;
    } else {
        std::cout << "Vectors are not the same." << std::endl;
    }
    
    return 0;
}