#include <iostream>
#include <vector>
#include <algorithm>

float get_positive(float f) {
    return f > 0 ? f : 0;
}

std::vector<float> get_positive(const std::vector<float>& v) {
    std::vector<float> result;
    for (const auto& f : v) {
        if (f > 0) {
            result.push_back(f);
        }
    }
    return result;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(std::equal(get_positive({}), {}));
    std::vector<float> l1 = get_positive({0, 2.5f, -3, 4, 5});
    std::vector<float> l2 = {2.5f, 4, 5};
    if (issame(l1, l2)) {
        std::cout << "Vectors are same." << std::endl;
    } else {
        std::cout << "Vectors are not same." << std::endl;
    }
}