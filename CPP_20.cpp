#include <iostream>
#include <limits>

bool isSame(std::vector<float>& a, std::vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); ++i) {
        if (std::abs(a[i] - b[i]) > std::numeric_limits<float>::epsilon()) {
            return false;
        }
    }
    
    return true;
}

int main() {
    float arr1[3] = {1.0, 2.0, 3.0};
    float arr2[3] = {1.01, 2.02, 3.03};
    
    std::vector<float> vec1(arr1, arr1 + 3);
    std::vector<float> vec2(arr2, arr2 + 3);
    
    if (isSame(vec1, vec2)) {
        std::cout << "Arrays are the same." << std::endl;
    } else {
        std::cout << "Arrays are different." << std::endl;
    }
    
    return 0;
}