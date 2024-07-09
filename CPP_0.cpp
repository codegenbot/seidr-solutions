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
    std::vector<float> a;
    float num;

    std::cout << "Enter the elements of the vector: ";
    while(std::cin >> num) {
        a.push_back(num);
    }

    if (has_close_elements(a, 0.1f)) {
        std::cout << "The vector contains close elements." << std::endl;
    } else {
        std::cout << "The vector does not contain close elements." << std::endl;
    }
    return 0;
}