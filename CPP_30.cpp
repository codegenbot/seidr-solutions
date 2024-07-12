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
    std::vector<float> v1 = get_positive({-4.0f, 2.0f, -3.0f});
    std::vector<float> v2 = get_positive({5.0f, 7.0f, 9.0f});
    
    for (float x : v1) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    
    for (float x : v2) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}