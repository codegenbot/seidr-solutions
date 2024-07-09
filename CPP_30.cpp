```cpp
#include <vector>
#include <assert.h>

bool isSame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for (float x : l) {
        if (x > 0) {
            result.push_back(x);
        }
    }
    return result;
}

int main() {
    std::vector<float> input = {1.5, -2.3, 4.7, -5.9};
    auto result = get_positive(input);
    assert(isSame(result, {1.5, 4.7}));
    return 0;
}