#include <vector>
#include <algorithm>

std::pmr::vector<float> get_positive(std::pmr::vector<float> l) {
    std::pmr::vector<float> result(l.get_allocator());
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

int main() {
    assert(issame(get_positive({}), {}));
    return 0;
}