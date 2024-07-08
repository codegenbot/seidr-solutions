#include <iostream>
#include <vector>
#include <assert.h>

std::vector<float> get_positive(std::vector<float> vec) {
    std::vector<float> result;
    for (float i : vec) {
        if (i > 0)
            result.push_back(i);
    }
    return result;
}

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    assert(issame(get_positive({1.0, -2.0, 3.0}), {}));
    return 0;
}