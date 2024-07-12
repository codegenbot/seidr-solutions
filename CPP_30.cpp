#include <vector>
#include <algorithm>

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for (float x : l) {
        if (x > 0)
            result.push_back(x);
    }
    return result;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(std::issame(get_positive({}), {}));
    std::cout << "1.5 2.0 3.0" << std::endl;
    for (float x : get_positive({-1.5, 2.0, -3.0})) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    return 0;
}