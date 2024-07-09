#include <vector>
#include <assert.h>

bool isSame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    std::vector<float> input = {1.2f, -3.4f, 5.6f};
    auto result = get_positive(input);
    assert(isSame(result, {5.6f}));
    return 0;
}