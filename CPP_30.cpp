#include <iostream>
#include <vector>
#include <memory>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
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

std::pmr::vector<float> getPositive(const std::vector<float>& l) {
    std::pmr::vector<float> result(std::pmr::get_default_resource());
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert(issame(getPositive({}), {}) == true);
    return 0;
}