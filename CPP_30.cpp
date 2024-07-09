#include <vector>
#include <assert.h>

bool isSame(std::vector<float> a, std::vector<float> b) {
    // implement your comparison logic here
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
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
    std::vector<float> input = {1.0f, -2.0f, 3.0f, -4.0f};
    auto result = get_positive(input);
    assert(isSame(result, {1.0f, 3.0f}));
    return 0;
}