#include <vector>
#include <algorithm>

bool has_close_elements(const std::vector<float>& a) {
    for (size_t i = 1; i < a.size(); ++i) {
        if (std::abs(a[i] - a[i-1]) < 0.5f) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<float> a = {1.0, 2.0, 3.9f, 4.0, 5.0, 2.2};
    if (has_close_elements(a)) {
        std::cout << "The vector has close elements." << std::endl;
    } else {
        std::cout << "The vector does not have close elements." << std::endl;
    }
}