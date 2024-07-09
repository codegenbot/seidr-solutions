#include <vector>
#include <algorithm>

bool has_close_elements(const std::vector<float>& elements, float threshold) {
    for (int i = 0; i < elements.size() - 1; ++i) {
        if (std::abs(elements[i + 1] - elements[i]) <= threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<float> a = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    std::vector<float> b = {1.1f, 2.2f, 3.1f, 4.1f, 5.1f};
    if (!has_close_elements(b, 0.5f)) {
        return 0;
    } else {
        return 1;
    }
}