#include <vector>
#include <algorithm>
#include <cmath>

bool has_close_elements(const std::vector<float>& vec, float threshold) {
    for (size_t i = 1; i < vec.size(); ++i) {
        if (std::abs(vec[i] - vec[i-1]) <= threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<float> a({1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f});
    if (has_close_elements(a, 0.1f)) {
        std::cout << "The vector contains close elements." << std::endl;
    } else {
        std::cout << "The vector does not contain close elements." << std::endl;
    }
    return 0;
}