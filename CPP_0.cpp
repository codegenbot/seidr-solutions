#include <vector>

bool std::has_close_elements(const std::vector<float> &a) {
    for (size_t i = 0; i < a.size() - 1; i++) {
        if (std::abs(a[i] - a[i + 1]) < 0.1) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<float> a = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
}