#include <iostream>
#include <vector>

int has_close_elements(const std::vector<float>& vec, float tolerance) {
    for (size_t i = 0; i < vec.size() - 1; ++i) {
        if (std::abs(vec[i] - vec[i + 1]) <= tolerance) {
            return 1;
        }
    }
    return 0;
}

int main() {
    float numbers[] = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    std::vector<float> a(numbers, numbers + sizeof(numbers) / sizeof(*numbers));
    
    assert(has_close_elements(a, 0.5) == false);
}