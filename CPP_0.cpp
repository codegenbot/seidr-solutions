#include <vector>

std::vector<float> a = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};

bool has_close_elements(const std::vector<float>& vec, float threshold) {
    // Add your implementation here
    return false;
}

int main() {
    assert(has_close_elements(a, 0.5f) == false);
    return 0;
}