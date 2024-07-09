```cpp
#include <vector>
#include <stdexcept>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        throw std::runtime_error("Vectors are not the same size");
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

float get_positive(std::vector<float> v) {
    for (auto &num : v) {
        num = std::abs(num);
    }
    return 1.0f; // Return value is not used in the main function
}

int main() {
    try {
        std::vector<float> v1 = get_positive({-1, -2, -3});
        std::vector<float> v2 = {1, 2, 3};
        assert(issame(v1, v2));
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << '\n';
        return 1;
    }
}