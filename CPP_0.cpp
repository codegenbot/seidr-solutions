#include <vector>
#include <assert.h>

int has_close_elements(std::vector<float> v, float epsilon) {
    for (size_t i = 0; i < v.size() - 1; ++i)
        if ((v[i] >= v[i + 1] - epsilon) && (v[i] <= v[i + 1] + epsilon))
            return true;
    return false;
}

int main() {
    std::vector<float> a = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    assert(has_close_elements(std::vector<float>{1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f}, 0.5) == false);
    return 0;
}