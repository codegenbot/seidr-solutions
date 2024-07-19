#include <vector>
#include <cmath>

bool has_close_elements(const std::vector<float>& a) {
    for (int i = 0; i < a.size() - 1; ++i) {
        if (std::abs(a[i] - a[i + 1]) < 0.1) {
            return true;
        }
    }
    return false;
}

std::vector<float> a = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};

int main() {
    std::vector<float> a = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    if (has_close_elements(a)) {
        std::cout << "Close elements exist." << std::endl;
    } else {
        std::cout << "No close elements found." << std::endl;
    }
    return 0;
}