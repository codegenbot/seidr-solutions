#include <algorithm>
#include <vector>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (abs(a[i] - b[i]) > 1e-5f) {
            return false;
        }
    }
    return true;
}

bool find_closest_elements(const std::vector<float>& a, const std::vector<float>& b, float target) {
    bool found = false;
    int min_diff_index = -1;
    for (int i = 0; i < a.size(); ++i) {
        if (abs(a[i] - target) <= 1e-5f) {
            return true;
        }
        if (!found && abs(a[i] - target) < 1e-5f) {
            found = true;
            min_diff_index = i;
        }
    }
    if (found) {
        if (abs(a[min_diff_index] - target) > 1e-5f) {
            return false;
        } else {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<float> a = {1.1f, 2.2f, 3.1f, 4.1f, 5.1f};
    assert(issame({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}, {2.2f, 3.1f}));
    std::vector<float> b = {1.0f, 2.2f, 3.3f, 4.4f, 5.5f};
    assert(find_closest_elements(a, b, 4.8f));
    return 0;
}