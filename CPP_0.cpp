#include <vector>
#include <cassert>

bool has_close_elements(const std::vector<float>& vec, float epsilon) {
    for (int i = 0; i < vec.size() - 1; i++) {
        if (std::abs(vec[i] - vec[i + 1]) <= epsilon) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<float> a;
    for (float x : {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f}) {
        a.push_back(x);
    }
    assert(has_close_elements(a, 0.5) == false);
}