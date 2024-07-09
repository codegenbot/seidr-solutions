#include <vector>
#include <cmath>

bool has_close_elements(const std::vector<float>& v) {
    for (int i = 1; i < v.size(); i++) {
        if (std::abs(v[i] - v[i-1]) < 0.1f) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<float> a = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    bool result = has_close_elements(a);
    if (result) {
        std::cout << "Vector contains close elements." << std::endl;
    } else {
        std::cout << "Vector does not contain close elements." << std::endl;
    }
    return 0;
}