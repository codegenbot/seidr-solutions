#include <vector>
#include <cassert>

bool has_close_elements(const std::vector<float>& v, float epsilon) {
    for (int i = 0; i < v.size() - 1; ++i) {
        if (abs(v[i] - v[i+1]) <= epsilon) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<float> a(6);
    a[0] = 1.0f;
    a[1] = 2.0f;
    a[2] = 3.9f;
    a[3] = 4.0f;
    a[4] = 5.0f;
    a[5] = 2.2f;
    assert(has_close_elements(a, 0.5) == false);
}