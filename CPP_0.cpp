#include <vector>
#include <assert.h>

bool has_close_elements(const std::vector<float>& vec, float epsilon) {
    for (int i = 0; i < vec.size() - 1; ++i) {
        if (std::abs(vec[i] - vec[i + 1]) > epsilon) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<float> a = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    float epsilon = 0.1f;
    if (has_close_elements(a, epsilon)) {
        std::cout << "The vector has close elements." << std::endl;
    } else {
        std::cout << "The vector does not have close elements." << std::endl;
    }
    return 0;
}