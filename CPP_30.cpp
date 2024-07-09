```cpp
#include <vector>
#include <assert.h>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size();
}

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert(issame({}, {}) == true);
    assert(get_positive({}) == {});
    vector<float> vec1 = {1, -2, 3};
    vector<float> vec2 = {-4, 5, -6};
    vector<float> posVec1 = get_positive(vec1);
    vector<float> posVec2 = get_positive(vec2);
    assert(issame(posVec1, {}) == false);
    assert(issame(posVec2, {}) == true);
    for (float num : posVec1) {
        if (num > 0) {
            std::cout << num << " ";
        }
    }
    std::cout << '\n';
    return 0;
}