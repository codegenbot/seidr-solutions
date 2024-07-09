#include <iostream>
#include <vector>

bool has_close_elements(const std::vector<float>& vec, float threshold) {
    for (size_t i = 1; i < vec.size(); ++i) {
        if (std::abs(vec[i] - vec[i-1]) <= threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<float> a(5); // Initialize the vector with 5 elements
    float num;

    for(int i = 0; i < 5; ++i) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> a[i];
    }

    if (has_close_elements(a, 0.1f)) {
        std::cout << "The vector contains close elements." << std::endl;
    } else {
        std::cout << "The vector does not contain close elements." << std::endl;
    }
    return 0;
}