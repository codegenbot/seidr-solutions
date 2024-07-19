#include <vector>
#include <cassert>

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size();
}

int main() {
    assert(get_positive({}) == std::vector<float>({}));
    return 0;
}