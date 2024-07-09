#include <vector>
#include <assert.h>

std::vector<float> get_positive(std::vector<float> v) {
    std::vector<float> result;
    for (float x : v) {
        if (x > 0) result.push_back(x);
    }
    return result;
}

bool is_same(std::vector<float> vec1, std::vector<float> vec2) {
    return vec1 == vec2;
}

assert(is_same(get_positive({}), {}));