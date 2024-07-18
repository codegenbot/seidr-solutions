#include <vector>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b) {
    std::vector<float> result;
    for (float num : a) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result == b;
}

int main() {
    assert(issame(get_positive({}), {}));
}