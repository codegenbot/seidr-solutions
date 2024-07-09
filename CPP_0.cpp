```cpp
#include <vector>
#include <assert.h>

bool has_close_elements(float a[], int n, float tol) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (std::abs(a[i] - a[j]) <= tol) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    float numbers[] = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    std::vector<float> a = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    assert(has_close_elements(a.data(), a.size(), 0.5) == false);
}